object QuickMoneyManagmentForm: TQuickMoneyManagmentForm
  Left = 0
  Top = 0
  Caption = 'Quick money management'
  ClientHeight = 433
  ClientWidth = 626
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object UstedenoLabel: TLabel
    Left = 32
    Top = 59
    Width = 50
    Height = 15
    Caption = 'Ustedeno'
  end
  object OpisLabel: TLabel
    Left = 32
    Top = 115
    Width = 24
    Height = 15
    Caption = 'Opis'
  end
  object CalcLabel: TLabel
    Left = 232
    Top = 243
    Width = 53
    Height = 15
    Caption = 'Kalkulator'
  end
  object EditAmount: TEdit
    Left = 136
    Top = 56
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object EditTime: TEdit
    Left = 136
    Top = 112
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object ButtonAdd: TButton
    Left = 136
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Dodaj'
    TabOrder = 2
    OnClick = ButtonAddClick
  end
  object MemoOutput: TMemo
    Left = 328
    Top = 56
    Width = 185
    Height = 89
    TabOrder = 3
  end
  object ButtonCalculate: TButton
    Left = 376
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Izracunaj'
    TabOrder = 4
    OnClick = ButtonCalculateClick
  end
  object EditNum1: TEdit
    Left = 128
    Top = 272
    Width = 121
    Height = 23
    TabOrder = 5
  end
  object EditNum2: TEdit
    Left = 128
    Top = 312
    Width = 121
    Height = 23
    TabOrder = 6
  end
  object EditResult: TEdit
    Left = 128
    Top = 360
    Width = 121
    Height = 23
    TabOrder = 7
    Text = '='
  end
  object ButtonMultiply: TButton
    Left = 312
    Top = 288
    Width = 75
    Height = 25
    Caption = 'Mno'#382'i'
    TabOrder = 8
    OnClick = ButtonMultiplyClick
  end
  object ButtonDivide: TButton
    Left = 312
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Dijeli'
    TabOrder = 9
    OnClick = ButtonDivideClick
  end
  object EngButton: TRadioButton
    Left = 519
    Top = 8
    Width = 113
    Height = 17
    Caption = 'ENG'
    TabOrder = 10
    OnClick = EngButtonClick
  end
  object HRBtn: TRadioButton
    Left = 519
    Top = 33
    Width = 113
    Height = 17
    Caption = 'HR'
    Checked = True
    TabOrder = 11
    TabStop = True
    OnClick = HRBtnClick
  end
  object SumButton: TButton
    Left = 438
    Top = 288
    Width = 75
    Height = 25
    Caption = 'Zbroji'
    TabOrder = 12
    OnClick = SumButtonClick
  end
  object SubstractButton: TButton
    Left = 438
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Oduzmi'
    TabOrder = 13
    OnClick = SubstractButtonClick
  end
end
