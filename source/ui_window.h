/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
    public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *b_equ;
    QPushButton *b_clear;
    QPushButton *b_delete;
    QPushButton *b_theme;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *b_1;
    QPushButton *b_2;
    QPushButton *b_3;
    QPushButton *b_add;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b_4;
    QPushButton *b_5;
    QPushButton *b_6;
    QPushButton *b_sub;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *b_7;
    QPushButton *b_8;
    QPushButton *b_9;
    QPushButton *b_divide;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *b_sign;
    QPushButton *b_0;
    QPushButton *b_point;
    QPushButton *b_mul;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("/* ============================================================\n"
"   MODERN DARK 3D UI\n"
"   Qt 6 / QSS\n"
"   ============================================================ */\n"
"\n"
"\n"
"/* ============================================================\n"
"   GLOBAL\n"
"   ============================================================ */\n"
"\n"
"* {\n"
"    outline: none;\n"
"}\n"
"\n"
"QWidget {\n"
"    color: #F1F5F9;\n"
"    background-color: #0B0E13;\n"
"\n"
"    font-family: \"Segoe UI Variable\";\n"
"    font-size: 30px;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QMainWindow {\n"
"    background-color: #0B0E13;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   MAIN WINDOW\n"
"   ============================================================ */\n"
"\n"
"QMainWindow > QWidget {\n"
"    background-color: #0B0E13;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   LABELS\n"
"   ====================================================="
                        "======= */\n"
"\n"
"QLabel {\n"
"    color: #E2E8F0;\n"
"\n"
"    background-color: #141922;\n"
"\n"
"    border: 1px solid #252D3A;\n"
"    border-radius: 8px;\n"
"\n"
"    padding: 8px 12px;\n"
"\n"
"    font-size: 30px;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   TITLE LABEL\n"
"   ============================================================ */\n"
"\n"
"QLabel#titleLabel {\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: #11151D;\n"
"\n"
"    border: 1px solid #2A3443;\n"
"    border-radius: 12px;\n"
"\n"
"    padding: 14px 18px;\n"
"\n"
"    font-size: 27px;\n"
"    font-weight: 700;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   LARGE TITLE\n"
"   ============================================================ */\n"
"\n"
"QLabel#heroLabel {\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 #1822"
                        "33,\n"
"        stop: 0.5 #111827,\n"
"        stop: 1 #0D1118\n"
"    );\n"
"\n"
"    border: 1px solid #34445A;\n"
"    border-radius: 14px;\n"
"\n"
"    padding: 18px 22px;\n"
"\n"
"    font-size: 32px;\n"
"    font-weight: 700;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   SECTION LABEL\n"
"   ============================================================ */\n"
"\n"
"QLabel#sectionLabel {\n"
"    color: #F8FAFC;\n"
"\n"
"    background-color: #161B24;\n"
"\n"
"    border: 1px solid #293241;\n"
"    border-left: 3px solid #3B82F6;\n"
"\n"
"    border-radius: 8px;\n"
"\n"
"    padding: 9px 14px;\n"
"\n"
"    font-size: 18px;\n"
"    font-weight: 650;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   DESCRIPTION\n"
"   ============================================================ */\n"
"\n"
"QLabel#descriptionLabel {\n"
"    color: #AAB4C3;\n"
"\n"
"    background-color: #11151B;\n"
"\n"
"    border: 1px solid #202733;\n"
"\n"
""
                        "    border-radius: 7px;\n"
"\n"
"    padding: 9px 12px;\n"
"\n"
"    font-size: 14px;\n"
"    font-weight: 450;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   ACCENT LABEL\n"
"   ============================================================ */\n"
"\n"
"QLabel#accentLabel {\n"
"    color: #60A5FA;\n"
"\n"
"    background-color: #111C2D;\n"
"\n"
"    border: 1px solid #214A7A;\n"
"    border-radius: 7px;\n"
"\n"
"    padding: 7px 11px;\n"
"\n"
"    font-size: 14px;\n"
"    font-weight: 650;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   STATUS LABEL\n"
"   ============================================================ */\n"
"\n"
"QLabel#statusLabel {\n"
"    color: #93C5FD;\n"
"\n"
"    background-color: #0E1B2D;\n"
"\n"
"    border: 1px solid #1D4F82;\n"
"    border-radius: 7px;\n"
"\n"
"    padding: 6px 12px;\n"
"\n"
"    font-size: 13px;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"\n"
"/* ========================================"
                        "====================\n"
"   CARD LABEL\n"
"   ============================================================ */\n"
"\n"
"QLabel#cardLabel {\n"
"    color: #E5E7EB;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"        stop: 0 #1A202A,\n"
"        stop: 0.45 #151A22,\n"
"        stop: 1 #11151B\n"
"    );\n"
"\n"
"    border: 1px solid #303A49;\n"
"    border-radius: 12px;\n"
"\n"
"    padding: 14px 16px;\n"
"\n"
"    font-size: 15px;\n"
"    font-weight: 550;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   BUTTON BASE\n"
"   ============================================================ */\n"
"\n"
"QPushButton {\n"
"\n"
"    color: #E8EDF4;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"\n"
"        stop: 0 #252C37,\n"
"        stop: 0.45 #1E242D,\n"
"        stop: 0.55 #1B2028,\n"
"        stop: 1 #151A21\n"
"    );\n"
"\n"
"    border: 1px solid #374151;\n"
""
                        "\n"
"    border-radius: 9px;\n"
"\n"
"    border-top-color: #4B5563;\n"
"    border-bottom-color: #101318;\n"
"\n"
"    padding: 10px 20px;\n"
"\n"
"    min-height: 20px;\n"
"\n"
"    font-size: 30px;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   BUTTON HOVER\n"
"   ============================================================ */\n"
"\n"
"QPushButton:hover {\n"
"\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"\n"
"        stop: 0 #303A49,\n"
"        stop: 0.5 #252D39,\n"
"        stop: 1 #1C222B\n"
"    );\n"
"\n"
"    border: 1px solid #4B5563;\n"
"\n"
"    border-top-color: #64748B;\n"
"    border-bottom-color: #17202B;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   BUTTON PRESSED\n"
"   ============================================================ */\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"    color: #CBD5E1;\n"
"\n"
""
                        "    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"\n"
"        stop: 0 #101419,\n"
"        stop: 0.5 #151A20,\n"
"        stop: 1 #1C222A\n"
"    );\n"
"\n"
"    border: 1px solid #2563EB;\n"
"\n"
"    border-top-color: #101419;\n"
"    border-bottom-color: #374151;\n"
"\n"
"    padding-top: 12px;\n"
"    padding-bottom: 8px;\n"
"}\n"
"\n"
"\n"
"\n"
"/* ============================================================\n"
"   BUTTON DISABLED\n"
"   ============================================================ */\n"
"\n"
"QPushButton:disabled {\n"
"\n"
"    color: #525B68;\n"
"\n"
"    background-color: #111419;\n"
"\n"
"    border: 1px solid #1C222A;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   PRIMARY BUTTON\n"
"   ============================================================ */\n"
"\n"
"QPushButton[primary=\"true\"] {\n"
"\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"  "
                        "      x2: 0, y2: 1,\n"
"\n"
"        stop: 0 #4A9EFF,\n"
"        stop: 0.45 #347FE5,\n"
"        stop: 0.55 #286FD0,\n"
"        stop: 1 #1F5BB5\n"
"    );\n"
"\n"
"    border: 1px solid #60A5FA;\n"
"\n"
"    border-top-color: #93C5FD;\n"
"    border-bottom-color: #174A91;\n"
"\n"
"    border-radius: 9px;\n"
"\n"
"    padding: 10px 22px;\n"
"\n"
"    font-size: 15px;\n"
"    font-weight: 650;\n"
"}\n"
"\n"
"\n"
"/* Primary hover */\n"
"\n"
"QPushButton[primary=\"true\"]:hover {\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"\n"
"        stop: 0 #60A5FA,\n"
"        stop: 0.45 #3B8EF0,\n"
"        stop: 0.55 #2F7DDE,\n"
"        stop: 1 #2563C5\n"
"    );\n"
"\n"
"    border: 1px solid #93C5FD;\n"
"\n"
"    border-bottom-color: #1D4ED8;\n"
"}\n"
"\n"
"\n"
"/* Primary pressed */\n"
"\n"
"QPushButton[primary=\"true\"]:pressed {\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"\n"
"        stop: 0 #174A"
                        "91,\n"
"        stop: 0.5 #1D5EB0,\n"
"        stop: 1 #2874D0\n"
"    );\n"
"\n"
"    border: 1px solid #2563EB;\n"
"\n"
"    border-top-color: #123A70;\n"
"    border-bottom-color: #60A5FA;\n"
"\n"
"    padding-top: 12px;\n"
"    padding-bottom: 8px;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   SMALL BUTTON\n"
"   ============================================================ */\n"
"\n"
"QPushButton[small=\"true\"] {\n"
"\n"
"    color: #B8C1CE;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"\n"
"        stop: 0 #202630,\n"
"        stop: 1 #151920\n"
"    );\n"
"\n"
"    border: 1px solid #303846;\n"
"\n"
"    border-radius: 7px;\n"
"\n"
"    padding: 6px 13px;\n"
"\n"
"    min-height: 15px;\n"
"\n"
"    font-size: 13px;\n"
"    font-weight: 550;\n"
"}\n"
"\n"
"\n"
"QPushButton[small=\"true\"]:hover {\n"
"\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: #252D38;\n"
"\n"
"    border: 1px solid #3B82F6;"
                        "\n"
"}\n"
"\n"
"\n"
"QPushButton[small=\"true\"]:pressed {\n"
"\n"
"    color: #60A5FA;\n"
"\n"
"    background-color: #0D1117;\n"
"\n"
"    border: 1px solid #2563EB;\n"
"\n"
"    padding-top: 8px;\n"
"    padding-bottom: 4px;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   FLAT BUTTON\n"
"   ============================================================ */\n"
"\n"
"QPushButton[flat=\"true\"] {\n"
"\n"
"    color: #9CA3AF;\n"
"\n"
"    background-color: transparent;\n"
"\n"
"    border: 1px solid transparent;\n"
"\n"
"    border-radius: 7px;\n"
"\n"
"    padding: 8px 13px;\n"
"}\n"
"\n"
"\n"
"QPushButton[flat=\"true\"]:hover {\n"
"\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: #171C24;\n"
"\n"
"    border: 1px solid #293241;\n"
"}\n"
"\n"
"\n"
"QPushButton[flat=\"true\"]:pressed {\n"
"\n"
"    color: #60A5FA;\n"
"\n"
"    background-color: #0D1117;\n"
"\n"
"    border: 1px solid #1D4ED8;\n"
"}\n"
"\n"
"\n"
"/* =================================================="
                        "==========\n"
"   LINE EDIT\n"
"   ============================================================ */\n"
"\n"
"QLineEdit {\n"
"\n"
"    color: #F8FAFC;\n"
"\n"
"    background-color: #11151B;\n"
"\n"
"    border: 1px solid #2B3441;\n"
"\n"
"    border-radius: 8px;\n"
"\n"
"    padding: 11px 13px;\n"
"\n"
"    font-size: 15px;\n"
"\n"
"    selection-background-color: #2563EB;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"\n"
"QLineEdit:hover {\n"
"\n"
"    background-color: #141922;\n"
"\n"
"    border: 1px solid #3A4657;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"/* ============================================================\n"
"   TEXT EDIT\n"
"   ============================================================ */\n"
"\n"
"QTextEdit,\n"
"QPlainTextEdit {\n"
"\n"
"    color: #E5E7EB;\n"
"\n"
"    background-color: #10141A;\n"
"\n"
"    border: 1px solid #293241;\n"
"\n"
"    border-radius: 9px;\n"
"\n"
"    padding: 10px;\n"
"\n"
"    font-size: 15px;\n"
"\n"
"    selection-background-color: #2563EB;\n"
"    selection-color: "
                        "#FFFFFF;\n"
"}\n"
"\n"
"/* ============================================================\n"
"   COMBO BOX\n"
"   ============================================================ */\n"
"\n"
"QComboBox {\n"
"\n"
"    color: #E5E7EB;\n"
"\n"
"    background-color: #171C23;\n"
"\n"
"    border: 1px solid #303846;\n"
"\n"
"    border-radius: 8px;\n"
"\n"
"    padding: 10px 12px;\n"
"\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"\n"
"QComboBox:hover {\n"
"\n"
"    background-color: #1C222B;\n"
"\n"
"    border: 1px solid #3B82F6;\n"
"}\n"
"\n"
"\n"
"QComboBox:on {\n"
"\n"
"    background-color: #11161E;\n"
"\n"
"    border: 1px solid #2563EB;\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView {\n"
"\n"
"    color: #E5E7EB;\n"
"\n"
"    background-color: #171C23;\n"
"\n"
"    border: 1px solid #303846;\n"
"\n"
"    selection-background-color: #2563EB;\n"
"\n"
"    selection-color: #FFFFFF;\n"
"\n"
"    padding: 5px;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   CHECK BOX\n"
"   ======="
                        "===================================================== */\n"
"\n"
"QCheckBox {\n"
"\n"
"    color: #CBD5E1;\n"
"\n"
"    spacing: 9px;\n"
"\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"\n"
"QCheckBox:hover {\n"
"\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"\n"
"    width: 19px;\n"
"    height: 19px;\n"
"\n"
"    background-color: #151A21;\n"
"\n"
"    border: 1px solid #3A4655;\n"
"\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:hover {\n"
"\n"
"    border: 1px solid #3B82F6;\n"
"\n"
"    background-color: #1A222D;\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:checked {\n"
"\n"
"    background-color: #2563EB;\n"
"\n"
"    border: 1px solid #60A5FA;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   RADIO\n"
"   ============================================================ */\n"
"\n"
"QRadioButton {\n"
"\n"
"    color: #CBD5E1;\n"
"\n"
"    spacing: 9px;\n"
"\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator {\n"
"\n"
""
                        "    width: 19px;\n"
"    height: 19px;\n"
"\n"
"    background-color: #151A21;\n"
"\n"
"    border: 1px solid #3A4655;\n"
"\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:hover {\n"
"\n"
"    border: 1px solid #3B82F6;\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:checked {\n"
"\n"
"    background-color: #2563EB;\n"
"\n"
"    border: 5px solid #151A21;\n"
"\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   GROUP BOX\n"
"   ============================================================ */\n"
"\n"
"QGroupBox {\n"
"\n"
"    color: #E5E7EB;\n"
"\n"
"    background-color: #11151B;\n"
"\n"
"    border: 1px solid #293241;\n"
"\n"
"    border-radius: 11px;\n"
"\n"
"    margin-top: 17px;\n"
"\n"
"    padding: 15px;\n"
"}\n"
"\n"
"\n"
"QGroupBox:hover {\n"
"\n"
"    border: 1px solid #344154;\n"
"}\n"
"\n"
"\n"
"QGroupBox::title {\n"
"\n"
"    subcontrol-origin: margin;\n"
"\n"
"    left: 15px;\n"
"\n"
"    padding: 3px 9px;\n"
"\n"
"    color: #CBD5E1;\n"
""
                        "\n"
"    background-color: #11151B;\n"
"\n"
"    border: 1px solid #293241;\n"
"\n"
"    border-radius: 6px;\n"
"\n"
"    font-size: 14px;\n"
"    font-weight: 650;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   CARD FRAME\n"
"   ============================================================ */\n"
"\n"
"QFrame#card {\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"\n"
"        stop: 0 #1A202A,\n"
"        stop: 0.5 #151A22,\n"
"        stop: 1 #10141A\n"
"    );\n"
"\n"
"    border: 1px solid #303A49;\n"
"\n"
"    border-top-color: #414D5E;\n"
"    border-bottom-color: #171C23;\n"
"\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   PANEL\n"
"   ============================================================ */\n"
"\n"
"QFrame#panel {\n"
"\n"
"    background-color: #11151B;\n"
"\n"
"    border: 1px solid #252D38;\n"
"\n"
"    border-radius: 10px;\n"
""
                        "}\n"
"\n"
"\n"
"/* ============================================================\n"
"   SCROLL BAR\n"
"   ============================================================ */\n"
"\n"
"QScrollBar:vertical {\n"
"\n"
"    background: transparent;\n"
"\n"
"    width: 12px;\n"
"\n"
"    margin: 3px;\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical {\n"
"\n"
"    background-color: #303A49;\n"
"\n"
"    border-radius: 6px;\n"
"\n"
"    min-height: 35px;\n"
"\n"
"    border: 2px solid #0B0E13;\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"\n"
"    background-color: #3B82F6;\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical:pressed {\n"
"\n"
"    background-color: #2563EB;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"\n"
"    height: 0px;\n"
"\n"
"    background: none;\n"
"\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical,\n"
"QScrollBar::sub-page:vertical {\n"
"\n"
"    background: transparent;\n"
"}\n"
"\n"
"\n"
"/* ============================"
                        "================================\n"
"   PROGRESS BAR\n"
"   ============================================================ */\n"
"\n"
"QProgressBar {\n"
"\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: #171C23;\n"
"\n"
"    border: 1px solid #293241;\n"
"\n"
"    border-radius: 7px;\n"
"\n"
"    text-align: center;\n"
"\n"
"    padding: 1px;\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk {\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"\n"
"        stop: 0 #1D4ED8,\n"
"        stop: 0.5 #3B82F6,\n"
"        stop: 1 #60A5FA\n"
"    );\n"
"\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   LIST / TREE / TABLE\n"
"   ============================================================ */\n"
"\n"
"QListWidget,\n"
"QTreeWidget,\n"
"QTableWidget,\n"
"QTableView {\n"
"\n"
"    color: #DDE3EC;\n"
"\n"
"    background-color: #10141A;\n"
"\n"
"    alternate-background-color: #131820;\n"
"\n"
"    border: "
                        "1px solid #293241;\n"
"\n"
"    border-radius: 9px;\n"
"\n"
"    outline: none;\n"
"\n"
"    selection-background-color: #1D4ED8;\n"
"\n"
"    selection-color: #FFFFFF;\n"
"\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"\n"
"QListWidget::item,\n"
"QTreeWidget::item {\n"
"\n"
"    padding: 8px;\n"
"\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"\n"
"QListWidget::item:hover,\n"
"QTreeWidget::item:hover {\n"
"\n"
"    background-color: #1A212B;\n"
"}\n"
"\n"
"\n"
"QListWidget::item:selected,\n"
"QTreeWidget::item:selected {\n"
"\n"
"    background-color: #1D4ED8;\n"
"\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   TABLE HEADER\n"
"   ============================================================ */\n"
"\n"
"QHeaderView::section {\n"
"\n"
"    color: #AAB4C3;\n"
"\n"
"    background-color: #171C23;\n"
"\n"
"    border: none;\n"
"\n"
"    border-bottom: 1px solid #293241;\n"
"\n"
"    padding: 10px;\n"
"\n"
"    font-weight: 650;\n"
"}\n"
"\n"
"\n"
"QHeaderVi"
                        "ew::section:hover {\n"
"\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: #1D2430;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   MENU\n"
"   ============================================================ */\n"
"\n"
"QMenu {\n"
"\n"
"    color: #E5E7EB;\n"
"\n"
"    background-color: #171C23;\n"
"\n"
"    border: 1px solid #303846;\n"
"\n"
"    border-radius: 9px;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"\n"
"QMenu::item {\n"
"\n"
"    padding: 9px 30px 9px 12px;\n"
"\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"QMenu::item:selected {\n"
"\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: #2563EB;\n"
"}\n"
"\n"
"\n"
"QMenu::separator {\n"
"\n"
"    height: 1px;\n"
"\n"
"    background-color: #293241;\n"
"\n"
"    margin: 6px 9px;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   TOOL TIP\n"
"   ============================================================ */\n"
"\n"
"QToolTip {\n"
"\n"
"    color: #F8FAFC;\n"
"\n"
""
                        "    background-color: #181E27;\n"
"\n"
"    border: 1px solid #3A4655;\n"
"\n"
"    border-radius: 7px;\n"
"\n"
"    padding: 7px 10px;\n"
"\n"
"    font-size: 13px;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   TOOL BAR\n"
"   ============================================================ */\n"
"\n"
"QToolBar {\n"
"\n"
"    background-color: #10141A;\n"
"\n"
"    border: none;\n"
"\n"
"    border-bottom: 1px solid #222A35;\n"
"\n"
"    spacing: 5px;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"\n"
"QToolButton {\n"
"\n"
"    color: #AAB4C3;\n"
"\n"
"    background-color: transparent;\n"
"\n"
"    border: 1px solid transparent;\n"
"\n"
"    border-radius: 7px;\n"
"\n"
"    padding: 8px;\n"
"}\n"
"\n"
"\n"
"QToolButton:hover {\n"
"\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: #1A212B;\n"
"\n"
"    border: 1px solid #303A49;\n"
"}\n"
"\n"
"\n"
"QToolButton:pressed {\n"
"\n"
"    color: #60A5FA;\n"
"\n"
"    background-color: #0E131A;\n"
"\n"
"    border: 1px soli"
                        "d #2563EB;\n"
"}\n"
"\n"
"\n"
"QToolButton:checked {\n"
"\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: #1D4ED8;\n"
"\n"
"    border: 1px solid #3B82F6;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   STATUS BAR\n"
"   ============================================================ */\n"
"\n"
"QStatusBar {\n"
"\n"
"    color: #7F8A99;\n"
"\n"
"    background-color: #090C10;\n"
"\n"
"    border-top: 1px solid #202733;\n"
"\n"
"    font-size: 13px;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   TAB WIDGET\n"
"   ============================================================ */\n"
"\n"
"QTabWidget::pane {\n"
"\n"
"    background-color: #11151B;\n"
"\n"
"    border: 1px solid #293241;\n"
"\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab {\n"
"\n"
"    color: #7F8A99;\n"
"\n"
"    background-color: transparent;\n"
"\n"
"    border: 1px solid transparent;\n"
"\n"
"    padding: 10px 17px;\n"
"\n"
"    margin-right:"
                        " 3px;\n"
"\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:hover {\n"
"\n"
"    color: #E5E7EB;\n"
"\n"
"    background-color: #171C23;\n"
"\n"
"    border: 1px solid #293241;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected {\n"
"\n"
"    color: #FFFFFF;\n"
"\n"
"    background-color: #1A2432;\n"
"\n"
"    border: 1px solid #30445E;\n"
"\n"
"    border-bottom: 2px solid #3B82F6;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   SLIDER\n"
"   ============================================================ */\n"
"\n"
"QSlider::groove:horizontal {\n"
"\n"
"    height: 5px;\n"
"\n"
"    background-color: #252D38;\n"
"\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"\n"
"    background-color: #2563EB;\n"
"\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal {\n"
"\n"
"    background-color: #252D38;\n"
"\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal {\n"
"\n"
" "
                        "   width: 16px;\n"
"    height: 16px;\n"
"\n"
"    margin: -6px 0;\n"
"\n"
"    background-color: #3B82F6;\n"
"\n"
"    border: 2px solid #0B0E13;\n"
"\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"\n"
"    background-color: #60A5FA;\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:pressed {\n"
"\n"
"    background-color: #2563EB;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   SPLITTER\n"
"   ============================================================ */\n"
"\n"
"QSplitter::handle {\n"
"\n"
"    background-color: #1E2631;\n"
"}\n"
"\n"
"\n"
"QSplitter::handle:hover {\n"
"\n"
"    background-color: #3B82F6;\n"
"}\n"
"\n"
"\n"
"QSplitter::handle:horizontal {\n"
"\n"
"    width: 3px;\n"
"}\n"
"\n"
"\n"
"QSplitter::handle:vertical {\n"
"\n"
"    height: 3px;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   DIALOG\n"
"   ============================================================ */\n"
"\n"
""
                        "QDialog {\n"
"\n"
"    background-color: #0B0E13;\n"
"\n"
"    color: #E5E7EB;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   MESSAGE BOX\n"
"   ============================================================ */\n"
"\n"
"QMessageBox {\n"
"\n"
"    background-color: #0B0E13;\n"
"\n"
"    color: #E5E7EB;\n"
"}\n"
"\n"
"\n"
"QMessageBox QLabel {\n"
"\n"
"    color: #E5E7EB;\n"
"\n"
"    background-color: transparent;\n"
"\n"
"    border: none;\n"
"\n"
"    padding: 4px;\n"
"\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"\n"
"QMessageBox QPushButton {\n"
"\n"
"    min-width: 85px;\n"
"}\n"
"\n"
"\n"
"/* ============================================================\n"
"   DOCK WIDGET\n"
"   ============================================================ */\n"
"\n"
"QDockWidget {\n"
"\n"
"    color: #E5E7EB;\n"
"\n"
"    background-color: #10141A;\n"
"}\n"
"\n"
"\n"
"QDockWidget::title {\n"
"\n"
"    color: #AAB4C3;\n"
"\n"
"    background-color: #151A22;\n"
"\n"
"    border-bottom: 1p"
                        "x solid #293241;\n"
"\n"
"    padding: 9px;\n"
"\n"
"    font-weight: 650;\n"
"}\n"
"\n"
"\n"
" /* ============================================================\n"
"    PRIMARY / HERO BUTTON\n"
"    Dynamic Property:\n"
"    is_primery = true\n"
"    ============================================================ */\n"
"\n"
"/* ============================================================\n"
"   PRIMARY BUTTON\n"
"   is_primery = true\n"
"   ============================================================ */\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton[is_primery=\"true\"] {\n"
"    background-color: #121269;\n"
"\n"
"    border-style: outset;\n"
"    border-width: 3px;\n"
"    border-radius: 13px;\n"
"    border-color: #0A0A4D;\n"
"\n"
"    min-width: 10em;\n"
"    min-height: 2.2em;\n"
"\n"
"    padding: 6px 14px;\n"
"\n"
"    color: #E8E8FF;\n"
"\n"
"    font-size: 30px;\n"
"    font-weight: 700;\n"
"}\n"
"\n"
"QPushButton[is_primery=\"true\"]:hover {\n"
"    background-color: #18187D;\n"
"    border"
                        "-color: #0D0D5D;\n"
"}\n"
"\n"
"QPushButton[is_primery=\"true\"]:pressed {\n"
"    background-color: #0E0E58;\n"
"\n"
"    border-style: inset;\n"
"    border-width: 3px;\n"
"    border-color: #070735;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 200));
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        b_equ = new QPushButton(centralwidget);
        b_equ->setObjectName("b_equ");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(b_equ->sizePolicy().hasHeightForWidth());
        b_equ->setSizePolicy(sizePolicy1);
        b_equ->setFont(font);
        b_equ->setProperty("is_primery", QVariant(true));

        horizontalLayout_6->addWidget(b_equ);

        b_clear = new QPushButton(centralwidget);
        b_clear->setObjectName("b_clear");
        sizePolicy1.setHeightForWidth(b_clear->sizePolicy().hasHeightForWidth());
        b_clear->setSizePolicy(sizePolicy1);
        b_clear->setProperty("is_primery", QVariant(true));

        horizontalLayout_6->addWidget(b_clear);

        b_delete = new QPushButton(centralwidget);
        b_delete->setObjectName("b_delete");
        sizePolicy1.setHeightForWidth(b_delete->sizePolicy().hasHeightForWidth());
        b_delete->setSizePolicy(sizePolicy1);
        b_delete->setProperty("is_primery", QVariant(true));

        horizontalLayout_6->addWidget(b_delete);

        b_theme = new QPushButton(centralwidget);
        b_theme->setObjectName("b_theme");
        sizePolicy1.setHeightForWidth(b_theme->sizePolicy().hasHeightForWidth());
        b_theme->setSizePolicy(sizePolicy1);
        b_theme->setProperty("is_primery", QVariant(true));

        horizontalLayout_6->addWidget(b_theme);


        verticalLayout->addLayout(horizontalLayout_6);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        b_1 = new QPushButton(centralwidget);
        b_1->setObjectName("b_1");
        sizePolicy1.setHeightForWidth(b_1->sizePolicy().hasHeightForWidth());
        b_1->setSizePolicy(sizePolicy1);
        b_1->setFont(font);
        b_1->setProperty("is_primery", QVariant(false));

        horizontalLayout->addWidget(b_1);

        b_2 = new QPushButton(centralwidget);
        b_2->setObjectName("b_2");
        sizePolicy1.setHeightForWidth(b_2->sizePolicy().hasHeightForWidth());
        b_2->setSizePolicy(sizePolicy1);
        b_2->setProperty("is_primery", QVariant(false));

        horizontalLayout->addWidget(b_2);

        b_3 = new QPushButton(centralwidget);
        b_3->setObjectName("b_3");
        sizePolicy1.setHeightForWidth(b_3->sizePolicy().hasHeightForWidth());
        b_3->setSizePolicy(sizePolicy1);
        b_3->setProperty("is_primery", QVariant(false));

        horizontalLayout->addWidget(b_3);

        b_add = new QPushButton(centralwidget);
        b_add->setObjectName("b_add");
        sizePolicy1.setHeightForWidth(b_add->sizePolicy().hasHeightForWidth());
        b_add->setSizePolicy(sizePolicy1);
        b_add->setProperty("is_primery", QVariant(false));

        horizontalLayout->addWidget(b_add);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        b_4 = new QPushButton(centralwidget);
        b_4->setObjectName("b_4");
        sizePolicy1.setHeightForWidth(b_4->sizePolicy().hasHeightForWidth());
        b_4->setSizePolicy(sizePolicy1);
        b_4->setProperty("is_primery", QVariant(false));

        horizontalLayout_2->addWidget(b_4);

        b_5 = new QPushButton(centralwidget);
        b_5->setObjectName("b_5");
        sizePolicy1.setHeightForWidth(b_5->sizePolicy().hasHeightForWidth());
        b_5->setSizePolicy(sizePolicy1);
        b_5->setProperty("is_primery", QVariant(false));

        horizontalLayout_2->addWidget(b_5);

        b_6 = new QPushButton(centralwidget);
        b_6->setObjectName("b_6");
        sizePolicy1.setHeightForWidth(b_6->sizePolicy().hasHeightForWidth());
        b_6->setSizePolicy(sizePolicy1);
        b_6->setProperty("is_primery", QVariant(false));

        horizontalLayout_2->addWidget(b_6);

        b_sub = new QPushButton(centralwidget);
        b_sub->setObjectName("b_sub");
        sizePolicy1.setHeightForWidth(b_sub->sizePolicy().hasHeightForWidth());
        b_sub->setSizePolicy(sizePolicy1);
        b_sub->setProperty("is_primery", QVariant(false));

        horizontalLayout_2->addWidget(b_sub);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        b_7 = new QPushButton(centralwidget);
        b_7->setObjectName("b_7");
        sizePolicy1.setHeightForWidth(b_7->sizePolicy().hasHeightForWidth());
        b_7->setSizePolicy(sizePolicy1);
        b_7->setProperty("is_primery", QVariant(false));

        horizontalLayout_3->addWidget(b_7);

        b_8 = new QPushButton(centralwidget);
        b_8->setObjectName("b_8");
        sizePolicy1.setHeightForWidth(b_8->sizePolicy().hasHeightForWidth());
        b_8->setSizePolicy(sizePolicy1);
        b_8->setProperty("is_primery", QVariant(false));

        horizontalLayout_3->addWidget(b_8);

        b_9 = new QPushButton(centralwidget);
        b_9->setObjectName("b_9");
        sizePolicy1.setHeightForWidth(b_9->sizePolicy().hasHeightForWidth());
        b_9->setSizePolicy(sizePolicy1);
        b_9->setProperty("is_primery", QVariant(false));

        horizontalLayout_3->addWidget(b_9);

        b_divide = new QPushButton(centralwidget);
        b_divide->setObjectName("b_divide");
        sizePolicy1.setHeightForWidth(b_divide->sizePolicy().hasHeightForWidth());
        b_divide->setSizePolicy(sizePolicy1);
        b_divide->setProperty("is_primery", QVariant(false));

        horizontalLayout_3->addWidget(b_divide);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        b_sign = new QPushButton(centralwidget);
        b_sign->setObjectName("b_sign");
        sizePolicy1.setHeightForWidth(b_sign->sizePolicy().hasHeightForWidth());
        b_sign->setSizePolicy(sizePolicy1);
        b_sign->setProperty("is_primery", QVariant(false));

        horizontalLayout_4->addWidget(b_sign);

        b_0 = new QPushButton(centralwidget);
        b_0->setObjectName("b_0");
        sizePolicy1.setHeightForWidth(b_0->sizePolicy().hasHeightForWidth());
        b_0->setSizePolicy(sizePolicy1);
        b_0->setProperty("is_primery", QVariant(false));

        horizontalLayout_4->addWidget(b_0);

        b_point = new QPushButton(centralwidget);
        b_point->setObjectName("b_point");
        sizePolicy1.setHeightForWidth(b_point->sizePolicy().hasHeightForWidth());
        b_point->setSizePolicy(sizePolicy1);
        b_point->setProperty("is_primery", QVariant(false));

        horizontalLayout_4->addWidget(b_point);

        b_mul = new QPushButton(centralwidget);
        b_mul->setObjectName("b_mul");
        sizePolicy1.setHeightForWidth(b_mul->sizePolicy().hasHeightForWidth());
        b_mul->setSizePolicy(sizePolicy1);
        b_mul->setProperty("is_primery", QVariant(false));

        horizontalLayout_4->addWidget(b_mul);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 2);
        verticalLayout->setStretch(5, 2);

        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 5);
        MainWindow->setCentralWidget(centralwidget);
        MainWindow->show();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        b_equ->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        b_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        b_delete->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        b_theme->setText(QString());
        b_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        b_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        b_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        b_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        b_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        b_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        b_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        b_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        b_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        b_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        b_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        b_sign->setText(QCoreApplication::translate("MainWindow", "-/+", nullptr));
        b_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        b_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        b_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
