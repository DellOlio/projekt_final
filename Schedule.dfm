object ScheduleForm: TScheduleForm
  Left = 0
  Top = 0
  Caption = 'Schedule'
  ClientHeight = 649
  ClientWidth = 689
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 64
    Top = 416
    Width = 32
    Height = 15
    Caption = 'Name'
  end
  object Label2: TLabel
    Left = 64
    Top = 464
    Width = 20
    Height = 15
    Caption = 'Day'
  end
  object Label3: TLabel
    Left = 64
    Top = 512
    Width = 26
    Height = 15
    Caption = 'Time'
  end
  object Label4: TLabel
    Left = 64
    Top = 560
    Width = 32
    Height = 15
    Caption = 'Room'
  end
  object ListView1: TListView
    Left = 56
    Top = 32
    Width = 553
    Height = 281
    Columns = <
      item
        AutoSize = True
        Caption = 'Name'
      end
      item
        AutoSize = True
        Caption = 'Day'
      end
      item
        AutoSize = True
        Caption = 'Time'
      end
      item
        AutoSize = True
        Caption = 'Room'
      end>
    TabOrder = 0
    ViewStyle = vsReport
  end
  object LoadJSONButton: TButton
    Left = 56
    Top = 344
    Width = 113
    Height = 41
    Caption = 'Load schedule'
    TabOrder = 1
    OnClick = LoadJSONButtonClick
  end
  object NameEdit: TEdit
    Left = 144
    Top = 413
    Width = 145
    Height = 23
    TabOrder = 2
  end
  object DayEdit: TEdit
    Left = 144
    Top = 461
    Width = 145
    Height = 23
    TabOrder = 3
  end
  object TimeEdit: TEdit
    Left = 144
    Top = 509
    Width = 145
    Height = 23
    TabOrder = 4
  end
  object RoomEdit: TEdit
    Left = 144
    Top = 557
    Width = 145
    Height = 23
    TabOrder = 5
  end
  object AddClassButton: TButton
    Left = 200
    Top = 344
    Width = 113
    Height = 41
    Caption = 'Add class'
    TabOrder = 6
    OnClick = AddClassButtonClick
  end
  object DeleteClassButton: TButton
    Left = 352
    Top = 344
    Width = 113
    Height = 41
    Caption = 'Delete class'
    TabOrder = 7
    OnClick = DeleteClassButtonClick
  end
  object EditClassButton: TButton
    Left = 496
    Top = 344
    Width = 113
    Height = 41
    Caption = 'Edit class'
    TabOrder = 8
    OnClick = EditClassButtonClick
  end
end
