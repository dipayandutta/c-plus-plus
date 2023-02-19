/****************************************************************************
** Meta object code from reading C++ file 'documenthandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../texteditor/documenthandler.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documenthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_DocumentHandler_t {
    uint offsetsAndSizes[76];
    char stringdata0[16];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[22];
    char stringdata5[20];
    char stringdata6[12];
    char stringdata7[12];
    char stringdata8[17];
    char stringdata9[14];
    char stringdata10[17];
    char stringdata11[17];
    char stringdata12[12];
    char stringdata13[15];
    char stringdata14[7];
    char stringdata15[5];
    char stringdata16[7];
    char stringdata17[6];
    char stringdata18[8];
    char stringdata19[16];
    char stringdata20[5];
    char stringdata21[8];
    char stringdata22[7];
    char stringdata23[9];
    char stringdata24[20];
    char stringdata25[15];
    char stringdata26[15];
    char stringdata27[13];
    char stringdata28[10];
    char stringdata29[10];
    char stringdata30[14];
    char stringdata31[5];
    char stringdata32[5];
    char stringdata33[10];
    char stringdata34[7];
    char stringdata35[9];
    char stringdata36[9];
    char stringdata37[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DocumentHandler_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DocumentHandler_t qt_meta_stringdata_DocumentHandler = {
    {
        QT_MOC_LITERAL(0, 15),  // "DocumentHandler"
        QT_MOC_LITERAL(16, 15),  // "documentChanged"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 21),  // "cursorPositionChanged"
        QT_MOC_LITERAL(55, 21),  // "selectionStartChanged"
        QT_MOC_LITERAL(77, 19),  // "selectionEndChanged"
        QT_MOC_LITERAL(97, 11),  // "fontChanged"
        QT_MOC_LITERAL(109, 11),  // "boldChanged"
        QT_MOC_LITERAL(121, 16),  // "underlineChanged"
        QT_MOC_LITERAL(138, 13),  // "italicChanged"
        QT_MOC_LITERAL(152, 16),  // "textColorChanged"
        QT_MOC_LITERAL(169, 16),  // "alignmentChanged"
        QT_MOC_LITERAL(186, 11),  // "textChanged"
        QT_MOC_LITERAL(198, 14),  // "fileUrlChanged"
        QT_MOC_LITERAL(213, 6),  // "loaded"
        QT_MOC_LITERAL(220, 4),  // "text"
        QT_MOC_LITERAL(225, 6),  // "format"
        QT_MOC_LITERAL(232, 5),  // "error"
        QT_MOC_LITERAL(238, 7),  // "message"
        QT_MOC_LITERAL(246, 15),  // "modifiedChanged"
        QT_MOC_LITERAL(262, 4),  // "load"
        QT_MOC_LITERAL(267, 7),  // "fileUrl"
        QT_MOC_LITERAL(275, 6),  // "saveAs"
        QT_MOC_LITERAL(282, 8),  // "document"
        QT_MOC_LITERAL(291, 19),  // "QQuickTextDocument*"
        QT_MOC_LITERAL(311, 14),  // "cursorPosition"
        QT_MOC_LITERAL(326, 14),  // "selectionStart"
        QT_MOC_LITERAL(341, 12),  // "selectionEnd"
        QT_MOC_LITERAL(354, 9),  // "textColor"
        QT_MOC_LITERAL(364, 9),  // "alignment"
        QT_MOC_LITERAL(374, 13),  // "Qt::Alignment"
        QT_MOC_LITERAL(388, 4),  // "font"
        QT_MOC_LITERAL(393, 4),  // "bold"
        QT_MOC_LITERAL(398, 9),  // "underline"
        QT_MOC_LITERAL(408, 6),  // "italic"
        QT_MOC_LITERAL(415, 8),  // "fileName"
        QT_MOC_LITERAL(424, 8),  // "fileType"
        QT_MOC_LITERAL(433, 8)   // "modified"
    },
    "DocumentHandler",
    "documentChanged",
    "",
    "cursorPositionChanged",
    "selectionStartChanged",
    "selectionEndChanged",
    "fontChanged",
    "boldChanged",
    "underlineChanged",
    "italicChanged",
    "textColorChanged",
    "alignmentChanged",
    "textChanged",
    "fileUrlChanged",
    "loaded",
    "text",
    "format",
    "error",
    "message",
    "modifiedChanged",
    "load",
    "fileUrl",
    "saveAs",
    "document",
    "QQuickTextDocument*",
    "cursorPosition",
    "selectionStart",
    "selectionEnd",
    "textColor",
    "alignment",
    "Qt::Alignment",
    "font",
    "bold",
    "underline",
    "italic",
    "fileName",
    "fileType",
    "modified"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DocumentHandler[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
      14,  143, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,   15 /* Public */,
       3,    0,  117,    2, 0x06,   16 /* Public */,
       4,    0,  118,    2, 0x06,   17 /* Public */,
       5,    0,  119,    2, 0x06,   18 /* Public */,
       6,    0,  120,    2, 0x06,   19 /* Public */,
       7,    0,  121,    2, 0x06,   20 /* Public */,
       8,    0,  122,    2, 0x06,   21 /* Public */,
       9,    0,  123,    2, 0x06,   22 /* Public */,
      10,    0,  124,    2, 0x06,   23 /* Public */,
      11,    0,  125,    2, 0x06,   24 /* Public */,
      12,    0,  126,    2, 0x06,   25 /* Public */,
      13,    0,  127,    2, 0x06,   26 /* Public */,
      14,    2,  128,    2, 0x06,   27 /* Public */,
      17,    1,  133,    2, 0x06,   30 /* Public */,
      19,    0,  136,    2, 0x06,   32 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      20,    1,  137,    2, 0x0a,   33 /* Public */,
      22,    1,  140,    2, 0x0a,   35 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,   21,
    QMetaType::Void, QMetaType::QUrl,   21,

 // properties: name, type, flags
      23, 0x80000000 | 24, 0x0001510b, uint(0), 0,
      25, QMetaType::Int, 0x00015103, uint(1), 0,
      26, QMetaType::Int, 0x00015103, uint(2), 0,
      27, QMetaType::Int, 0x00015103, uint(3), 0,
      28, QMetaType::QColor, 0x00015103, uint(8), 0,
      29, 0x80000000 | 30, 0x0001510b, uint(9), 0,
      31, QMetaType::QFont, 0x00015103, uint(4), 0,
      32, QMetaType::Bool, 0x00015103, uint(5), 0,
      33, QMetaType::Bool, 0x00015103, uint(6), 0,
      34, QMetaType::Bool, 0x00015103, uint(7), 0,
      35, QMetaType::QString, 0x00015001, uint(11), 0,
      36, QMetaType::QString, 0x00015001, uint(11), 0,
      21, QMetaType::QUrl, 0x00015001, uint(11), 0,
      37, QMetaType::Bool, 0x00015103, uint(14), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DocumentHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DocumentHandler.offsetsAndSizes,
    qt_meta_data_DocumentHandler,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DocumentHandler_t,
        // property 'document'
        QtPrivate::TypeAndForceComplete<QQuickTextDocument*, std::true_type>,
        // property 'cursorPosition'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'selectionStart'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'selectionEnd'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'textColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'alignment'
        QtPrivate::TypeAndForceComplete<Qt::Alignment, std::true_type>,
        // property 'font'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'bold'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'underline'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'italic'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fileName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileType'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileUrl'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'modified'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DocumentHandler, std::true_type>,
        // method 'documentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionStartChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionEndChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fontChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'boldChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'underlineChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'italicChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'alignmentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'modifiedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'saveAs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>
    >,
    nullptr
} };

void DocumentHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DocumentHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->documentChanged(); break;
        case 1: _t->cursorPositionChanged(); break;
        case 2: _t->selectionStartChanged(); break;
        case 3: _t->selectionEndChanged(); break;
        case 4: _t->fontChanged(); break;
        case 5: _t->boldChanged(); break;
        case 6: _t->underlineChanged(); break;
        case 7: _t->italicChanged(); break;
        case 8: _t->textColorChanged(); break;
        case 9: _t->alignmentChanged(); break;
        case 10: _t->textChanged(); break;
        case 11: _t->fileUrlChanged(); break;
        case 12: _t->loaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->modifiedChanged(); break;
        case 15: _t->load((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 16: _t->saveAs((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::documentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::cursorPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::selectionStartChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::selectionEndChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::fontChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::boldChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::underlineChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::italicChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::textColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::alignmentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::fileUrlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)(const QString & , int );
            if (_t _q_method = &DocumentHandler::loaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)(const QString & );
            if (_t _q_method = &DocumentHandler::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (_t _q_method = &DocumentHandler::modifiedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DocumentHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickTextDocument**>(_v) = _t->document(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->selectionStart(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->selectionEnd(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 5: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 6: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->bold(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->underline(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->italic(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->fileType(); break;
        case 12: *reinterpret_cast< QUrl*>(_v) = _t->fileUrl(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->modified(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DocumentHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDocument(*reinterpret_cast< QQuickTextDocument**>(_v)); break;
        case 1: _t->setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSelectionStart(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSelectionEnd(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 6: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 7: _t->setBold(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setUnderline(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setItalic(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setModified(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *DocumentHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocumentHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void DocumentHandler::documentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DocumentHandler::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DocumentHandler::selectionStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DocumentHandler::selectionEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DocumentHandler::fontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DocumentHandler::boldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DocumentHandler::underlineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DocumentHandler::italicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void DocumentHandler::textColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void DocumentHandler::alignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void DocumentHandler::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void DocumentHandler::fileUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void DocumentHandler::loaded(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DocumentHandler::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DocumentHandler::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
