﻿Imports MySql.Data.MySqlClient
Public Class Pur

    Public NumId As String
    Public Max As Double = 0
    Public score As Integer = 0
    Public oldPMP As Double = 0
    Public flag As Boolean = False
    Public flag1 As Boolean = False



    Private Sub TextBox1_KeyPress(ByVal sender As Object, ByVal e As System.Windows.Forms.KeyPressEventArgs) Handles ACP.KeyPress
        If Char.IsDigit(e.KeyChar) Or e.KeyChar = "." Or e.KeyChar = Chr(13) Or e.KeyChar = Chr(8) Then
        Else
            e.Handled = True
        End If
        If e.KeyChar = Chr(13) Then
            If ACP.Text = "" Then
            Else
                exchange()
            End If
        End If
    End Sub

    Private Sub exchange()
        Dim ACPNUM As Double = Double.Parse(ACP.Text.ToString())
        Dim VIPPPNUM As Double = Double.Parse(VIPPP.Text.ToString())
        If flag = True Then
            If ACPNUM - Double.Parse(VIPPP.Text.ToString()) >= 0 Then
                If oldPMP + ACPNUM - VIPPPNUM <= Max Then
                    PMP.Text = oldPMP + ACPNUM - VIPPPNUM
                    PBP.Text = "0"
                    flag1 = True
                Else
                    Dim mon As Integer
                    mon = oldPMP + ACPNUM - VIPPPNUM - Max + 1
                    PMP.Text = ACPNUM - VIPPPNUM - mon
                    PBP.Text = mon
                    flag1 = True
                End If
            Else
                If ACPNUM + oldPMP - VIPPPNUM >= 0 Then
                    PMP.Text = ACPNUM + oldPMP - VIPPPNUM
                Else
                    flag1 = False
                    Message.Msg.Text = "付款金额不足！"
                    Message.Show()
                End If

            End If
        Else
            If ACPNUM - VIPPPNUM < 0 Then
                Message.Msg.Text = "付款金额不足！"
                Message.Show()
                flag1 = False
            End If

        End If
    End Sub

    Private Sub writetosql()
        If flag = True Then
            Try
                Dim SC As String = score.ToString()
                Dim Num As String = NumId.ToString()
                Dim str As String = "update utos set changes = " + PMP.Text.ToString() + ", score = " + SC + " where userID = '" + Num + "'"
                Dim Dr As MySqlCommand = New MySqlCommand(str, Login.conn)
                Dr.CommandType = CommandType.Text
                Dr.BeginExecuteNonQuery()
                Me.Close()
            Catch ex As Exception
                MsgBox(ex.Message)
            End Try
        End If
        subStock()
        destory()
        
    End Sub


    Private Sub Yes_Click(sender As Object, e As EventArgs) Handles Yes.Click
        If flag1 = True Then
            writetosql()
        End If
    End Sub

    Private Sub Pic_Click(sender As Object, e As EventArgs) Handles Pic.Click
        If flag1 = True Then
            writetosql()
        End If
    End Sub

    Private Sub destory()
        PURCHASE.lineNum = 1
        For i = 0 To PURCHASE.Data.Rows.Count - 1
            PURCHASE.Data.Rows.RemoveAt(0)
        Next
        PURCHASE.AllMoney.Text = ""
        PURCHASE.P_Name.Text = ""
        PURCHASE.P_Num.Text = ""
        PURCHASE.p_id_p.Text = ""
        PURCHASE.AllNum.Text = ""
    End Sub


    Private Sub subStock()
        Dim str As String
        For i = 0 To PURCHASE.Data.Rows.Count - 1
            Try
                str = "update goods set stock = stock - " + PURCHASE.Data.Rows(0).Cells(4).Value.ToString + " where id = " + PURCHASE.Data.Rows(0).Cells(1).Value.ToString
                Dim Dr As MySqlCommand = New MySqlCommand(Str, Login.conn)
                Dr.CommandType = CommandType.Text
                Dr.BeginExecuteNonQuery()
            Catch ex As Exception
                MsgBox(ex.Message)
            End Try
        Next
        Me.Close()
    End Sub

    Private Sub Pur_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub APP_Click(sender As Object, e As EventArgs) Handles APP.Click

    End Sub

    Private Sub ACP_TextChanged(sender As Object, e As EventArgs) Handles ACP.TextChanged

    End Sub
End Class