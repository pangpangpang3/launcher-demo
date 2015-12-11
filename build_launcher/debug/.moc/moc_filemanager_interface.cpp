/****************************************************************************
** Meta object code from reading C++ file 'filemanager_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../filemanager_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filemanager_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileManagerInterface_t {
    QByteArrayData data[103];
    char stringdata[2672];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileManagerInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileManagerInterface_t qt_meta_stringdata_FileManagerInterface = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FileManagerInterface"
QT_MOC_LITERAL(1, 21, 12), // "GetThemeIcon"
QT_MOC_LITERAL(2, 34, 26), // "QDBusPendingReply<QString>"
QT_MOC_LITERAL(3, 61, 0), // ""
QT_MOC_LITERAL(4, 62, 3), // "in0"
QT_MOC_LITERAL(5, 66, 3), // "in1"
QT_MOC_LITERAL(6, 70, 12), // "GetThumbnail"
QT_MOC_LITERAL(7, 83, 12), // "IsNativeFile"
QT_MOC_LITERAL(8, 96, 23), // "QDBusPendingReply<bool>"
QT_MOC_LITERAL(9, 120, 9), // "QueryInfo"
QT_MOC_LITERAL(10, 130, 3), // "in2"
QT_MOC_LITERAL(11, 134, 27), // "DriveStartStopTypeMultidisk"
QT_MOC_LITERAL(12, 162, 25), // "DriveStartStopTypeNetwork"
QT_MOC_LITERAL(13, 188, 26), // "DriveStartStopTypePassword"
QT_MOC_LITERAL(14, 215, 26), // "DriveStartStopTypeShutdown"
QT_MOC_LITERAL(15, 242, 25), // "DriveStartStopTypeUnknown"
QT_MOC_LITERAL(16, 268, 28), // "FileAttributeAccessCanDelete"
QT_MOC_LITERAL(17, 297, 29), // "FileAttributeAccessCanExecute"
QT_MOC_LITERAL(18, 327, 26), // "FileAttributeAccessCanRead"
QT_MOC_LITERAL(19, 354, 28), // "FileAttributeAccessCanRename"
QT_MOC_LITERAL(20, 383, 27), // "FileAttributeAccessCanTrash"
QT_MOC_LITERAL(21, 411, 27), // "FileAttributeAccessCanWrite"
QT_MOC_LITERAL(22, 439, 25), // "FileAttributeDosIsArchive"
QT_MOC_LITERAL(23, 465, 24), // "FileAttributeDosIsSystem"
QT_MOC_LITERAL(24, 490, 22), // "FileAttributeEtagValue"
QT_MOC_LITERAL(25, 513, 27), // "FileAttributeFilesystemFree"
QT_MOC_LITERAL(26, 541, 31), // "FileAttributeFilesystemReadonly"
QT_MOC_LITERAL(27, 573, 27), // "FileAttributeFilesystemSize"
QT_MOC_LITERAL(28, 601, 27), // "FileAttributeFilesystemType"
QT_MOC_LITERAL(29, 629, 33), // "FileAttributeFilesystemUsePre..."
QT_MOC_LITERAL(30, 663, 27), // "FileAttributeFilesystemUsed"
QT_MOC_LITERAL(31, 691, 24), // "FileAttributeGvfsBackend"
QT_MOC_LITERAL(32, 716, 19), // "FileAttributeIdFile"
QT_MOC_LITERAL(33, 736, 25), // "FileAttributeIdFilesystem"
QT_MOC_LITERAL(34, 762, 30), // "FileAttributeMountableCanEject"
QT_MOC_LITERAL(35, 793, 30), // "FileAttributeMountableCanMount"
QT_MOC_LITERAL(36, 824, 29), // "FileAttributeMountableCanPoll"
QT_MOC_LITERAL(37, 854, 30), // "FileAttributeMountableCanStart"
QT_MOC_LITERAL(38, 885, 38), // "FileAttributeMountableCanStar..."
QT_MOC_LITERAL(39, 924, 29), // "FileAttributeMountableCanStop"
QT_MOC_LITERAL(40, 954, 32), // "FileAttributeMountableCanUnmount"
QT_MOC_LITERAL(41, 987, 28), // "FileAttributeMountableHalUdi"
QT_MOC_LITERAL(42, 1016, 43), // "FileAttributeMountableIsMedia..."
QT_MOC_LITERAL(43, 1060, 35), // "FileAttributeMountableStartSt..."
QT_MOC_LITERAL(44, 1096, 32), // "FileAttributeMountableUnixDevice"
QT_MOC_LITERAL(45, 1129, 36), // "FileAttributeMountableUnixDev..."
QT_MOC_LITERAL(46, 1166, 23), // "FileAttributeOwnerGroup"
QT_MOC_LITERAL(47, 1190, 22), // "FileAttributeOwnerUser"
QT_MOC_LITERAL(48, 1213, 26), // "FileAttributeOwnerUserReal"
QT_MOC_LITERAL(49, 1240, 27), // "FileAttributeSelinuxContext"
QT_MOC_LITERAL(50, 1268, 34), // "FileAttributeStandardAllocate..."
QT_MOC_LITERAL(51, 1303, 32), // "FileAttributeStandardContentType"
QT_MOC_LITERAL(52, 1336, 29), // "FileAttributeStandardCopyName"
QT_MOC_LITERAL(53, 1366, 32), // "FileAttributeStandardDescription"
QT_MOC_LITERAL(54, 1399, 32), // "FileAttributeStandardDisplayName"
QT_MOC_LITERAL(55, 1432, 29), // "FileAttributeStandardEditName"
QT_MOC_LITERAL(56, 1462, 36), // "FileAttributeStandardFastCont..."
QT_MOC_LITERAL(57, 1499, 29), // "FileAttributeStandardIsBackup"
QT_MOC_LITERAL(58, 1529, 29), // "FileAttributeStandardIsHidden"
QT_MOC_LITERAL(59, 1559, 30), // "FileAttributeStandardIsSymlink"
QT_MOC_LITERAL(60, 1590, 30), // "FileAttributeStandardIsVirtual"
QT_MOC_LITERAL(61, 1621, 25), // "FileAttributeStandardName"
QT_MOC_LITERAL(62, 1647, 25), // "FileAttributeStandardSize"
QT_MOC_LITERAL(63, 1673, 30), // "FileAttributeStandardSortOrder"
QT_MOC_LITERAL(64, 1704, 34), // "FileAttributeStandardSymlinkT..."
QT_MOC_LITERAL(65, 1739, 30), // "FileAttributeStandardTargetUri"
QT_MOC_LITERAL(66, 1770, 25), // "FileAttributeStandardType"
QT_MOC_LITERAL(67, 1796, 29), // "FileAttributeThumbnailIsValid"
QT_MOC_LITERAL(68, 1826, 26), // "FileAttributeThumbnailPath"
QT_MOC_LITERAL(69, 1853, 31), // "FileAttributeThumbnailingFailed"
QT_MOC_LITERAL(70, 1885, 23), // "FileAttributeTimeAccess"
QT_MOC_LITERAL(71, 1909, 27), // "FileAttributeTimeAccessUsec"
QT_MOC_LITERAL(72, 1937, 24), // "FileAttributeTimeChanged"
QT_MOC_LITERAL(73, 1962, 28), // "FileAttributeTimeChangedUsec"
QT_MOC_LITERAL(74, 1991, 24), // "FileAttributeTimeCreated"
QT_MOC_LITERAL(75, 2016, 28), // "FileAttributeTimeCreatedUsec"
QT_MOC_LITERAL(76, 2045, 25), // "FileAttributeTimeModified"
QT_MOC_LITERAL(77, 2071, 29), // "FileAttributeTimeModifiedUsec"
QT_MOC_LITERAL(78, 2101, 30), // "FileAttributeTrashDeletionDate"
QT_MOC_LITERAL(79, 2132, 27), // "FileAttributeTrashItemCount"
QT_MOC_LITERAL(80, 2160, 26), // "FileAttributeTrashOrigPath"
QT_MOC_LITERAL(81, 2187, 26), // "FileAttributeUnixBlockSize"
QT_MOC_LITERAL(82, 2214, 23), // "FileAttributeUnixBlocks"
QT_MOC_LITERAL(83, 2238, 23), // "FileAttributeUnixDevice"
QT_MOC_LITERAL(84, 2262, 20), // "FileAttributeUnixGid"
QT_MOC_LITERAL(85, 2283, 22), // "FileAttributeUnixInode"
QT_MOC_LITERAL(86, 2306, 29), // "FileAttributeUnixIsMountpoint"
QT_MOC_LITERAL(87, 2336, 21), // "FileAttributeUnixMode"
QT_MOC_LITERAL(88, 2358, 22), // "FileAttributeUnixNlink"
QT_MOC_LITERAL(89, 2381, 21), // "FileAttributeUnixRdev"
QT_MOC_LITERAL(90, 2403, 20), // "FileAttributeUnixUid"
QT_MOC_LITERAL(91, 2424, 17), // "FileTypeDirectory"
QT_MOC_LITERAL(92, 2442, 17), // "FileTypeMountable"
QT_MOC_LITERAL(93, 2460, 15), // "FileTypeRegular"
QT_MOC_LITERAL(94, 2476, 16), // "FileTypeShortcut"
QT_MOC_LITERAL(95, 2493, 15), // "FileTypeSpecial"
QT_MOC_LITERAL(96, 2509, 20), // "FileTypeSymbolicLink"
QT_MOC_LITERAL(97, 2530, 15), // "FileTypeUnknown"
QT_MOC_LITERAL(98, 2546, 29), // "FilesystemPreviewTypeIfAlways"
QT_MOC_LITERAL(99, 2576, 28), // "FilesystemPreviewTypeIfLocal"
QT_MOC_LITERAL(100, 2605, 26), // "FilesystemPreviewTypeNever"
QT_MOC_LITERAL(101, 2632, 25), // "QueryFlagNofollowSymlinks"
QT_MOC_LITERAL(102, 2658, 13) // "QueryFlagNone"

    },
    "FileManagerInterface\0GetThemeIcon\0"
    "QDBusPendingReply<QString>\0\0in0\0in1\0"
    "GetThumbnail\0IsNativeFile\0"
    "QDBusPendingReply<bool>\0QueryInfo\0in2\0"
    "DriveStartStopTypeMultidisk\0"
    "DriveStartStopTypeNetwork\0"
    "DriveStartStopTypePassword\0"
    "DriveStartStopTypeShutdown\0"
    "DriveStartStopTypeUnknown\0"
    "FileAttributeAccessCanDelete\0"
    "FileAttributeAccessCanExecute\0"
    "FileAttributeAccessCanRead\0"
    "FileAttributeAccessCanRename\0"
    "FileAttributeAccessCanTrash\0"
    "FileAttributeAccessCanWrite\0"
    "FileAttributeDosIsArchive\0"
    "FileAttributeDosIsSystem\0"
    "FileAttributeEtagValue\0"
    "FileAttributeFilesystemFree\0"
    "FileAttributeFilesystemReadonly\0"
    "FileAttributeFilesystemSize\0"
    "FileAttributeFilesystemType\0"
    "FileAttributeFilesystemUsePreview\0"
    "FileAttributeFilesystemUsed\0"
    "FileAttributeGvfsBackend\0FileAttributeIdFile\0"
    "FileAttributeIdFilesystem\0"
    "FileAttributeMountableCanEject\0"
    "FileAttributeMountableCanMount\0"
    "FileAttributeMountableCanPoll\0"
    "FileAttributeMountableCanStart\0"
    "FileAttributeMountableCanStartDegraded\0"
    "FileAttributeMountableCanStop\0"
    "FileAttributeMountableCanUnmount\0"
    "FileAttributeMountableHalUdi\0"
    "FileAttributeMountableIsMediaCheckAutomatic\0"
    "FileAttributeMountableStartStopType\0"
    "FileAttributeMountableUnixDevice\0"
    "FileAttributeMountableUnixDeviceFile\0"
    "FileAttributeOwnerGroup\0FileAttributeOwnerUser\0"
    "FileAttributeOwnerUserReal\0"
    "FileAttributeSelinuxContext\0"
    "FileAttributeStandardAllocatedSize\0"
    "FileAttributeStandardContentType\0"
    "FileAttributeStandardCopyName\0"
    "FileAttributeStandardDescription\0"
    "FileAttributeStandardDisplayName\0"
    "FileAttributeStandardEditName\0"
    "FileAttributeStandardFastContentType\0"
    "FileAttributeStandardIsBackup\0"
    "FileAttributeStandardIsHidden\0"
    "FileAttributeStandardIsSymlink\0"
    "FileAttributeStandardIsVirtual\0"
    "FileAttributeStandardName\0"
    "FileAttributeStandardSize\0"
    "FileAttributeStandardSortOrder\0"
    "FileAttributeStandardSymlinkTarget\0"
    "FileAttributeStandardTargetUri\0"
    "FileAttributeStandardType\0"
    "FileAttributeThumbnailIsValid\0"
    "FileAttributeThumbnailPath\0"
    "FileAttributeThumbnailingFailed\0"
    "FileAttributeTimeAccess\0"
    "FileAttributeTimeAccessUsec\0"
    "FileAttributeTimeChanged\0"
    "FileAttributeTimeChangedUsec\0"
    "FileAttributeTimeCreated\0"
    "FileAttributeTimeCreatedUsec\0"
    "FileAttributeTimeModified\0"
    "FileAttributeTimeModifiedUsec\0"
    "FileAttributeTrashDeletionDate\0"
    "FileAttributeTrashItemCount\0"
    "FileAttributeTrashOrigPath\0"
    "FileAttributeUnixBlockSize\0"
    "FileAttributeUnixBlocks\0FileAttributeUnixDevice\0"
    "FileAttributeUnixGid\0FileAttributeUnixInode\0"
    "FileAttributeUnixIsMountpoint\0"
    "FileAttributeUnixMode\0FileAttributeUnixNlink\0"
    "FileAttributeUnixRdev\0FileAttributeUnixUid\0"
    "FileTypeDirectory\0FileTypeMountable\0"
    "FileTypeRegular\0FileTypeShortcut\0"
    "FileTypeSpecial\0FileTypeSymbolicLink\0"
    "FileTypeUnknown\0FilesystemPreviewTypeIfAlways\0"
    "FilesystemPreviewTypeIfLocal\0"
    "FilesystemPreviewTypeNever\0"
    "QueryFlagNofollowSymlinks\0QueryFlagNone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileManagerInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      92,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    3, 0x0a /* Public */,
       6,    2,   39,    3, 0x0a /* Public */,
       7,    1,   44,    3, 0x0a /* Public */,
       9,    3,   47,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::Int,    4,    5,
    0x80000000 | 2, QMetaType::QString, QMetaType::Int,    4,    5,
    0x80000000 | 8, QMetaType::QString,    4,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    4,    5,   10,

 // properties: name, type, flags
      11, QMetaType::UInt, 0x00095001,
      12, QMetaType::UInt, 0x00095001,
      13, QMetaType::UInt, 0x00095001,
      14, QMetaType::UInt, 0x00095001,
      15, QMetaType::UInt, 0x00095001,
      16, QMetaType::QString, 0x00095001,
      17, QMetaType::QString, 0x00095001,
      18, QMetaType::QString, 0x00095001,
      19, QMetaType::QString, 0x00095001,
      20, QMetaType::QString, 0x00095001,
      21, QMetaType::QString, 0x00095001,
      22, QMetaType::QString, 0x00095001,
      23, QMetaType::QString, 0x00095001,
      24, QMetaType::QString, 0x00095001,
      25, QMetaType::QString, 0x00095001,
      26, QMetaType::QString, 0x00095001,
      27, QMetaType::QString, 0x00095001,
      28, QMetaType::QString, 0x00095001,
      29, QMetaType::QString, 0x00095001,
      30, QMetaType::QString, 0x00095001,
      31, QMetaType::QString, 0x00095001,
      32, QMetaType::QString, 0x00095001,
      33, QMetaType::QString, 0x00095001,
      34, QMetaType::QString, 0x00095001,
      35, QMetaType::QString, 0x00095001,
      36, QMetaType::QString, 0x00095001,
      37, QMetaType::QString, 0x00095001,
      38, QMetaType::QString, 0x00095001,
      39, QMetaType::QString, 0x00095001,
      40, QMetaType::QString, 0x00095001,
      41, QMetaType::QString, 0x00095001,
      42, QMetaType::QString, 0x00095001,
      43, QMetaType::QString, 0x00095001,
      44, QMetaType::QString, 0x00095001,
      45, QMetaType::QString, 0x00095001,
      46, QMetaType::QString, 0x00095001,
      47, QMetaType::QString, 0x00095001,
      48, QMetaType::QString, 0x00095001,
      49, QMetaType::QString, 0x00095001,
      50, QMetaType::QString, 0x00095001,
      51, QMetaType::QString, 0x00095001,
      52, QMetaType::QString, 0x00095001,
      53, QMetaType::QString, 0x00095001,
      54, QMetaType::QString, 0x00095001,
      55, QMetaType::QString, 0x00095001,
      56, QMetaType::QString, 0x00095001,
      57, QMetaType::QString, 0x00095001,
      58, QMetaType::QString, 0x00095001,
      59, QMetaType::QString, 0x00095001,
      60, QMetaType::QString, 0x00095001,
      61, QMetaType::QString, 0x00095001,
      62, QMetaType::QString, 0x00095001,
      63, QMetaType::QString, 0x00095001,
      64, QMetaType::QString, 0x00095001,
      65, QMetaType::QString, 0x00095001,
      66, QMetaType::QString, 0x00095001,
      67, QMetaType::QString, 0x00095001,
      68, QMetaType::QString, 0x00095001,
      69, QMetaType::QString, 0x00095001,
      70, QMetaType::QString, 0x00095001,
      71, QMetaType::QString, 0x00095001,
      72, QMetaType::QString, 0x00095001,
      73, QMetaType::QString, 0x00095001,
      74, QMetaType::QString, 0x00095001,
      75, QMetaType::QString, 0x00095001,
      76, QMetaType::QString, 0x00095001,
      77, QMetaType::QString, 0x00095001,
      78, QMetaType::QString, 0x00095001,
      79, QMetaType::QString, 0x00095001,
      80, QMetaType::QString, 0x00095001,
      81, QMetaType::QString, 0x00095001,
      82, QMetaType::QString, 0x00095001,
      83, QMetaType::QString, 0x00095001,
      84, QMetaType::QString, 0x00095001,
      85, QMetaType::QString, 0x00095001,
      86, QMetaType::QString, 0x00095001,
      87, QMetaType::QString, 0x00095001,
      88, QMetaType::QString, 0x00095001,
      89, QMetaType::QString, 0x00095001,
      90, QMetaType::QString, 0x00095001,
      91, QMetaType::UInt, 0x00095001,
      92, QMetaType::UInt, 0x00095001,
      93, QMetaType::UInt, 0x00095001,
      94, QMetaType::UInt, 0x00095001,
      95, QMetaType::UInt, 0x00095001,
      96, QMetaType::UInt, 0x00095001,
      97, QMetaType::UInt, 0x00095001,
      98, QMetaType::UInt, 0x00095001,
      99, QMetaType::UInt, 0x00095001,
     100, QMetaType::UInt, 0x00095001,
     101, QMetaType::UInt, 0x00095001,
     102, QMetaType::UInt, 0x00095001,

       0        // eod
};

void FileManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileManagerInterface *_t = static_cast<FileManagerInterface *>(_o);
        switch (_id) {
        case 0: { QDBusPendingReply<QString> _r = _t->GetThemeIcon((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<QString> _r = _t->GetThumbnail((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<bool> _r = _t->IsNativeFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<QString> _r = _t->QueryInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject FileManagerInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_FileManagerInterface.data,
      qt_meta_data_FileManagerInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileManagerInterface.stringdata))
        return static_cast<void*>(const_cast< FileManagerInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int FileManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = driveStartStopTypeMultidisk(); break;
        case 1: *reinterpret_cast< uint*>(_v) = driveStartStopTypeNetwork(); break;
        case 2: *reinterpret_cast< uint*>(_v) = driveStartStopTypePassword(); break;
        case 3: *reinterpret_cast< uint*>(_v) = driveStartStopTypeShutdown(); break;
        case 4: *reinterpret_cast< uint*>(_v) = driveStartStopTypeUnknown(); break;
        case 5: *reinterpret_cast< QString*>(_v) = fileAttributeAccessCanDelete(); break;
        case 6: *reinterpret_cast< QString*>(_v) = fileAttributeAccessCanExecute(); break;
        case 7: *reinterpret_cast< QString*>(_v) = fileAttributeAccessCanRead(); break;
        case 8: *reinterpret_cast< QString*>(_v) = fileAttributeAccessCanRename(); break;
        case 9: *reinterpret_cast< QString*>(_v) = fileAttributeAccessCanTrash(); break;
        case 10: *reinterpret_cast< QString*>(_v) = fileAttributeAccessCanWrite(); break;
        case 11: *reinterpret_cast< QString*>(_v) = fileAttributeDosIsArchive(); break;
        case 12: *reinterpret_cast< QString*>(_v) = fileAttributeDosIsSystem(); break;
        case 13: *reinterpret_cast< QString*>(_v) = fileAttributeEtagValue(); break;
        case 14: *reinterpret_cast< QString*>(_v) = fileAttributeFilesystemFree(); break;
        case 15: *reinterpret_cast< QString*>(_v) = fileAttributeFilesystemReadonly(); break;
        case 16: *reinterpret_cast< QString*>(_v) = fileAttributeFilesystemSize(); break;
        case 17: *reinterpret_cast< QString*>(_v) = fileAttributeFilesystemType(); break;
        case 18: *reinterpret_cast< QString*>(_v) = fileAttributeFilesystemUsePreview(); break;
        case 19: *reinterpret_cast< QString*>(_v) = fileAttributeFilesystemUsed(); break;
        case 20: *reinterpret_cast< QString*>(_v) = fileAttributeGvfsBackend(); break;
        case 21: *reinterpret_cast< QString*>(_v) = fileAttributeIdFile(); break;
        case 22: *reinterpret_cast< QString*>(_v) = fileAttributeIdFilesystem(); break;
        case 23: *reinterpret_cast< QString*>(_v) = fileAttributeMountableCanEject(); break;
        case 24: *reinterpret_cast< QString*>(_v) = fileAttributeMountableCanMount(); break;
        case 25: *reinterpret_cast< QString*>(_v) = fileAttributeMountableCanPoll(); break;
        case 26: *reinterpret_cast< QString*>(_v) = fileAttributeMountableCanStart(); break;
        case 27: *reinterpret_cast< QString*>(_v) = fileAttributeMountableCanStartDegraded(); break;
        case 28: *reinterpret_cast< QString*>(_v) = fileAttributeMountableCanStop(); break;
        case 29: *reinterpret_cast< QString*>(_v) = fileAttributeMountableCanUnmount(); break;
        case 30: *reinterpret_cast< QString*>(_v) = fileAttributeMountableHalUdi(); break;
        case 31: *reinterpret_cast< QString*>(_v) = fileAttributeMountableIsMediaCheckAutomatic(); break;
        case 32: *reinterpret_cast< QString*>(_v) = fileAttributeMountableStartStopType(); break;
        case 33: *reinterpret_cast< QString*>(_v) = fileAttributeMountableUnixDevice(); break;
        case 34: *reinterpret_cast< QString*>(_v) = fileAttributeMountableUnixDeviceFile(); break;
        case 35: *reinterpret_cast< QString*>(_v) = fileAttributeOwnerGroup(); break;
        case 36: *reinterpret_cast< QString*>(_v) = fileAttributeOwnerUser(); break;
        case 37: *reinterpret_cast< QString*>(_v) = fileAttributeOwnerUserReal(); break;
        case 38: *reinterpret_cast< QString*>(_v) = fileAttributeSelinuxContext(); break;
        case 39: *reinterpret_cast< QString*>(_v) = fileAttributeStandardAllocatedSize(); break;
        case 40: *reinterpret_cast< QString*>(_v) = fileAttributeStandardContentType(); break;
        case 41: *reinterpret_cast< QString*>(_v) = fileAttributeStandardCopyName(); break;
        case 42: *reinterpret_cast< QString*>(_v) = fileAttributeStandardDescription(); break;
        case 43: *reinterpret_cast< QString*>(_v) = fileAttributeStandardDisplayName(); break;
        case 44: *reinterpret_cast< QString*>(_v) = fileAttributeStandardEditName(); break;
        case 45: *reinterpret_cast< QString*>(_v) = fileAttributeStandardFastContentType(); break;
        case 46: *reinterpret_cast< QString*>(_v) = fileAttributeStandardIsBackup(); break;
        case 47: *reinterpret_cast< QString*>(_v) = fileAttributeStandardIsHidden(); break;
        case 48: *reinterpret_cast< QString*>(_v) = fileAttributeStandardIsSymlink(); break;
        case 49: *reinterpret_cast< QString*>(_v) = fileAttributeStandardIsVirtual(); break;
        case 50: *reinterpret_cast< QString*>(_v) = fileAttributeStandardName(); break;
        case 51: *reinterpret_cast< QString*>(_v) = fileAttributeStandardSize(); break;
        case 52: *reinterpret_cast< QString*>(_v) = fileAttributeStandardSortOrder(); break;
        case 53: *reinterpret_cast< QString*>(_v) = fileAttributeStandardSymlinkTarget(); break;
        case 54: *reinterpret_cast< QString*>(_v) = fileAttributeStandardTargetUri(); break;
        case 55: *reinterpret_cast< QString*>(_v) = fileAttributeStandardType(); break;
        case 56: *reinterpret_cast< QString*>(_v) = fileAttributeThumbnailIsValid(); break;
        case 57: *reinterpret_cast< QString*>(_v) = fileAttributeThumbnailPath(); break;
        case 58: *reinterpret_cast< QString*>(_v) = fileAttributeThumbnailingFailed(); break;
        case 59: *reinterpret_cast< QString*>(_v) = fileAttributeTimeAccess(); break;
        case 60: *reinterpret_cast< QString*>(_v) = fileAttributeTimeAccessUsec(); break;
        case 61: *reinterpret_cast< QString*>(_v) = fileAttributeTimeChanged(); break;
        case 62: *reinterpret_cast< QString*>(_v) = fileAttributeTimeChangedUsec(); break;
        case 63: *reinterpret_cast< QString*>(_v) = fileAttributeTimeCreated(); break;
        case 64: *reinterpret_cast< QString*>(_v) = fileAttributeTimeCreatedUsec(); break;
        case 65: *reinterpret_cast< QString*>(_v) = fileAttributeTimeModified(); break;
        case 66: *reinterpret_cast< QString*>(_v) = fileAttributeTimeModifiedUsec(); break;
        case 67: *reinterpret_cast< QString*>(_v) = fileAttributeTrashDeletionDate(); break;
        case 68: *reinterpret_cast< QString*>(_v) = fileAttributeTrashItemCount(); break;
        case 69: *reinterpret_cast< QString*>(_v) = fileAttributeTrashOrigPath(); break;
        case 70: *reinterpret_cast< QString*>(_v) = fileAttributeUnixBlockSize(); break;
        case 71: *reinterpret_cast< QString*>(_v) = fileAttributeUnixBlocks(); break;
        case 72: *reinterpret_cast< QString*>(_v) = fileAttributeUnixDevice(); break;
        case 73: *reinterpret_cast< QString*>(_v) = fileAttributeUnixGid(); break;
        case 74: *reinterpret_cast< QString*>(_v) = fileAttributeUnixInode(); break;
        case 75: *reinterpret_cast< QString*>(_v) = fileAttributeUnixIsMountpoint(); break;
        case 76: *reinterpret_cast< QString*>(_v) = fileAttributeUnixMode(); break;
        case 77: *reinterpret_cast< QString*>(_v) = fileAttributeUnixNlink(); break;
        case 78: *reinterpret_cast< QString*>(_v) = fileAttributeUnixRdev(); break;
        case 79: *reinterpret_cast< QString*>(_v) = fileAttributeUnixUid(); break;
        case 80: *reinterpret_cast< uint*>(_v) = fileTypeDirectory(); break;
        case 81: *reinterpret_cast< uint*>(_v) = fileTypeMountable(); break;
        case 82: *reinterpret_cast< uint*>(_v) = fileTypeRegular(); break;
        case 83: *reinterpret_cast< uint*>(_v) = fileTypeShortcut(); break;
        case 84: *reinterpret_cast< uint*>(_v) = fileTypeSpecial(); break;
        case 85: *reinterpret_cast< uint*>(_v) = fileTypeSymbolicLink(); break;
        case 86: *reinterpret_cast< uint*>(_v) = fileTypeUnknown(); break;
        case 87: *reinterpret_cast< uint*>(_v) = filesystemPreviewTypeIfAlways(); break;
        case 88: *reinterpret_cast< uint*>(_v) = filesystemPreviewTypeIfLocal(); break;
        case 89: *reinterpret_cast< uint*>(_v) = filesystemPreviewTypeNever(); break;
        case 90: *reinterpret_cast< uint*>(_v) = queryFlagNofollowSymlinks(); break;
        case 91: *reinterpret_cast< uint*>(_v) = queryFlagNone(); break;
        default: break;
        }
        _id -= 92;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 92;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 92;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 92;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 92;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 92;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 92;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 92;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 92)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 92;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
