#include <sun/nio/fs/WindowsConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ACCESS_ALLOWED_ACE_TYPE
#undef ACCESS_DENIED_ACE_TYPE
#undef BACKUP_ALTERNATE_DATA
#undef BACKUP_SPARSE_BLOCK
#undef CONTAINER_INHERIT_ACE
#undef COPY_FILE_COPY_SYMLINK
#undef COPY_FILE_FAIL_IF_EXISTS
#undef CREATE_ALWAYS
#undef CREATE_NEW
#undef DACL_SECURITY_INFORMATION
#undef DELETE
#undef DRIVE_CDROM
#undef DRIVE_FIXED
#undef DRIVE_NO_ROOT_DIR
#undef DRIVE_RAMDISK
#undef DRIVE_REMOTE
#undef DRIVE_REMOVABLE
#undef DRIVE_UNKNOWN
#undef ERROR_ACCESS_DENIED
#undef ERROR_ALREADY_EXISTS
#undef ERROR_CANT_ACCESS_FILE
#undef ERROR_DIRECTORY
#undef ERROR_DIR_NOT_EMPTY
#undef ERROR_DIR_NOT_ROOT
#undef ERROR_DISK_FULL
#undef ERROR_FILE_EXISTS
#undef ERROR_FILE_NOT_FOUND
#undef ERROR_INSUFFICIENT_BUFFER
#undef ERROR_INVALID_DATA
#undef ERROR_INVALID_HANDLE
#undef ERROR_INVALID_LEVEL
#undef ERROR_INVALID_PARAMETER
#undef ERROR_INVALID_REPARSE_DATA
#undef ERROR_MORE_DATA
#undef ERROR_NONE_MAPPED
#undef ERROR_NOTIFY_ENUM_DIR
#undef ERROR_NOT_A_REPARSE_POINT
#undef ERROR_NOT_READY
#undef ERROR_NOT_SAME_DEVICE
#undef ERROR_PATH_NOT_FOUND
#undef ERROR_PRIVILEGE_NOT_HELD
#undef ERROR_SHARING_VIOLATION
#undef FILE_ACTION_ADDED
#undef FILE_ACTION_MODIFIED
#undef FILE_ACTION_REMOVED
#undef FILE_ACTION_RENAMED_NEW_NAME
#undef FILE_ACTION_RENAMED_OLD_NAME
#undef FILE_ALL_ACCESS
#undef FILE_APPEND_DATA
#undef FILE_ATTRIBUTE_ARCHIVE
#undef FILE_ATTRIBUTE_DEVICE
#undef FILE_ATTRIBUTE_DIRECTORY
#undef FILE_ATTRIBUTE_HIDDEN
#undef FILE_ATTRIBUTE_NORMAL
#undef FILE_ATTRIBUTE_READONLY
#undef FILE_ATTRIBUTE_REPARSE_POINT
#undef FILE_ATTRIBUTE_SYSTEM
#undef FILE_CASE_PRESERVED_NAMES
#undef FILE_CASE_SENSITIVE_SEARCH
#undef FILE_DELETE_CHILD
#undef FILE_EXECUTE
#undef FILE_FLAG_BACKUP_SEMANTICS
#undef FILE_FLAG_DELETE_ON_CLOSE
#undef FILE_FLAG_NO_BUFFERING
#undef FILE_FLAG_OPEN_REPARSE_POINT
#undef FILE_FLAG_OVERLAPPED
#undef FILE_FLAG_WRITE_THROUGH
#undef FILE_GENERIC_EXECUTE
#undef FILE_GENERIC_READ
#undef FILE_GENERIC_WRITE
#undef FILE_LIST_DIRECTORY
#undef FILE_NAMED_STREAMS
#undef FILE_NOTIFY_CHANGE_ATTRIBUTES
#undef FILE_NOTIFY_CHANGE_CREATION
#undef FILE_NOTIFY_CHANGE_DIR_NAME
#undef FILE_NOTIFY_CHANGE_FILE_NAME
#undef FILE_NOTIFY_CHANGE_LAST_ACCESS
#undef FILE_NOTIFY_CHANGE_LAST_WRITE
#undef FILE_NOTIFY_CHANGE_SECURITY
#undef FILE_NOTIFY_CHANGE_SIZE
#undef FILE_PERSISTENT_ACLS
#undef FILE_READ_ATTRIBUTES
#undef FILE_READ_DATA
#undef FILE_READ_EA
#undef FILE_READ_ONLY_VOLUME
#undef FILE_SHARE_DELETE
#undef FILE_SHARE_READ
#undef FILE_SHARE_WRITE
#undef FILE_VOLUME_IS_COMPRESSED
#undef FILE_WRITE_ATTRIBUTES
#undef FILE_WRITE_DATA
#undef FILE_WRITE_EA
#undef GENERIC_READ
#undef GENERIC_WRITE
#undef GROUP_SECURITY_INFORMATION
#undef INHERIT_ONLY_ACE
#undef INVALID_HANDLE_VALUE
#undef IO_REPARSE_TAG_AF_UNIX
#undef IO_REPARSE_TAG_SYMLINK
#undef MAXIMUM_REPARSE_DATA_BUFFER_SIZE
#undef MOVEFILE_COPY_ALLOWED
#undef MOVEFILE_REPLACE_EXISTING
#undef NO_PROPAGATE_INHERIT_ACE
#undef OBJECT_INHERIT_ACE
#undef OPEN_ALWAYS
#undef OPEN_EXISTING
#undef OWNER_SECURITY_INFORMATION
#undef PROCESS_QUERY_INFORMATION
#undef READ_CONTROL
#undef SACL_SECURITY_INFORMATION
#undef SE_PRIVILEGE_ENABLED
#undef SYMBOLIC_LINK_FLAG_ALLOW_UNPRIVILEGED_CREATE
#undef SYMBOLIC_LINK_FLAG_DIRECTORY
#undef SYNCHRONIZE
#undef TOKEN_ADJUST_PRIVILEGES
#undef TOKEN_DUPLICATE
#undef TOKEN_IMPERSONATE
#undef TOKEN_QUERY
#undef TRUNCATE_EXISTING
#undef WRITE_DAC
#undef WRITE_OWNER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsConstants_FieldInfo_[] = {
	{"INVALID_HANDLE_VALUE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, INVALID_HANDLE_VALUE)},
	{"GENERIC_READ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, GENERIC_READ)},
	{"GENERIC_WRITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, GENERIC_WRITE)},
	{"FILE_SHARE_READ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_SHARE_READ)},
	{"FILE_SHARE_WRITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_SHARE_WRITE)},
	{"FILE_SHARE_DELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_SHARE_DELETE)},
	{"CREATE_NEW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, CREATE_NEW)},
	{"CREATE_ALWAYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, CREATE_ALWAYS)},
	{"OPEN_EXISTING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, OPEN_EXISTING)},
	{"OPEN_ALWAYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, OPEN_ALWAYS)},
	{"TRUNCATE_EXISTING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, TRUNCATE_EXISTING)},
	{"FILE_ATTRIBUTE_READONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ATTRIBUTE_READONLY)},
	{"FILE_ATTRIBUTE_HIDDEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ATTRIBUTE_HIDDEN)},
	{"FILE_ATTRIBUTE_SYSTEM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ATTRIBUTE_SYSTEM)},
	{"FILE_ATTRIBUTE_DIRECTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ATTRIBUTE_DIRECTORY)},
	{"FILE_ATTRIBUTE_ARCHIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ATTRIBUTE_ARCHIVE)},
	{"FILE_ATTRIBUTE_DEVICE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ATTRIBUTE_DEVICE)},
	{"FILE_ATTRIBUTE_NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ATTRIBUTE_NORMAL)},
	{"FILE_ATTRIBUTE_REPARSE_POINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ATTRIBUTE_REPARSE_POINT)},
	{"FILE_FLAG_NO_BUFFERING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_FLAG_NO_BUFFERING)},
	{"FILE_FLAG_OVERLAPPED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_FLAG_OVERLAPPED)},
	{"FILE_FLAG_WRITE_THROUGH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_FLAG_WRITE_THROUGH)},
	{"FILE_FLAG_BACKUP_SEMANTICS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_FLAG_BACKUP_SEMANTICS)},
	{"FILE_FLAG_DELETE_ON_CLOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_FLAG_DELETE_ON_CLOSE)},
	{"FILE_FLAG_OPEN_REPARSE_POINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_FLAG_OPEN_REPARSE_POINT)},
	{"BACKUP_ALTERNATE_DATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, BACKUP_ALTERNATE_DATA)},
	{"BACKUP_SPARSE_BLOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, BACKUP_SPARSE_BLOCK)},
	{"IO_REPARSE_TAG_SYMLINK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, IO_REPARSE_TAG_SYMLINK)},
	{"IO_REPARSE_TAG_AF_UNIX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, IO_REPARSE_TAG_AF_UNIX)},
	{"MAXIMUM_REPARSE_DATA_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, MAXIMUM_REPARSE_DATA_BUFFER_SIZE)},
	{"SYMBOLIC_LINK_FLAG_DIRECTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SYMBOLIC_LINK_FLAG_DIRECTORY)},
	{"SYMBOLIC_LINK_FLAG_ALLOW_UNPRIVILEGED_CREATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SYMBOLIC_LINK_FLAG_ALLOW_UNPRIVILEGED_CREATE)},
	{"FILE_CASE_SENSITIVE_SEARCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_CASE_SENSITIVE_SEARCH)},
	{"FILE_CASE_PRESERVED_NAMES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_CASE_PRESERVED_NAMES)},
	{"FILE_PERSISTENT_ACLS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_PERSISTENT_ACLS)},
	{"FILE_VOLUME_IS_COMPRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_VOLUME_IS_COMPRESSED)},
	{"FILE_NAMED_STREAMS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_NAMED_STREAMS)},
	{"FILE_READ_ONLY_VOLUME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_READ_ONLY_VOLUME)},
	{"ERROR_FILE_NOT_FOUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_FILE_NOT_FOUND)},
	{"ERROR_PATH_NOT_FOUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_PATH_NOT_FOUND)},
	{"ERROR_ACCESS_DENIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_ACCESS_DENIED)},
	{"ERROR_INVALID_HANDLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_INVALID_HANDLE)},
	{"ERROR_INVALID_DATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_INVALID_DATA)},
	{"ERROR_NOT_SAME_DEVICE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_NOT_SAME_DEVICE)},
	{"ERROR_NOT_READY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_NOT_READY)},
	{"ERROR_SHARING_VIOLATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_SHARING_VIOLATION)},
	{"ERROR_FILE_EXISTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_FILE_EXISTS)},
	{"ERROR_INVALID_PARAMETER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_INVALID_PARAMETER)},
	{"ERROR_DISK_FULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_DISK_FULL)},
	{"ERROR_INSUFFICIENT_BUFFER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_INSUFFICIENT_BUFFER)},
	{"ERROR_INVALID_LEVEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_INVALID_LEVEL)},
	{"ERROR_DIR_NOT_ROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_DIR_NOT_ROOT)},
	{"ERROR_DIR_NOT_EMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_DIR_NOT_EMPTY)},
	{"ERROR_ALREADY_EXISTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_ALREADY_EXISTS)},
	{"ERROR_MORE_DATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_MORE_DATA)},
	{"ERROR_DIRECTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_DIRECTORY)},
	{"ERROR_NOTIFY_ENUM_DIR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_NOTIFY_ENUM_DIR)},
	{"ERROR_PRIVILEGE_NOT_HELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_PRIVILEGE_NOT_HELD)},
	{"ERROR_NONE_MAPPED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_NONE_MAPPED)},
	{"ERROR_CANT_ACCESS_FILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_CANT_ACCESS_FILE)},
	{"ERROR_NOT_A_REPARSE_POINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_NOT_A_REPARSE_POINT)},
	{"ERROR_INVALID_REPARSE_DATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ERROR_INVALID_REPARSE_DATA)},
	{"FILE_NOTIFY_CHANGE_FILE_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_NOTIFY_CHANGE_FILE_NAME)},
	{"FILE_NOTIFY_CHANGE_DIR_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_NOTIFY_CHANGE_DIR_NAME)},
	{"FILE_NOTIFY_CHANGE_ATTRIBUTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_NOTIFY_CHANGE_ATTRIBUTES)},
	{"FILE_NOTIFY_CHANGE_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_NOTIFY_CHANGE_SIZE)},
	{"FILE_NOTIFY_CHANGE_LAST_WRITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_NOTIFY_CHANGE_LAST_WRITE)},
	{"FILE_NOTIFY_CHANGE_LAST_ACCESS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_NOTIFY_CHANGE_LAST_ACCESS)},
	{"FILE_NOTIFY_CHANGE_CREATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_NOTIFY_CHANGE_CREATION)},
	{"FILE_NOTIFY_CHANGE_SECURITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_NOTIFY_CHANGE_SECURITY)},
	{"FILE_ACTION_ADDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ACTION_ADDED)},
	{"FILE_ACTION_REMOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ACTION_REMOVED)},
	{"FILE_ACTION_MODIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ACTION_MODIFIED)},
	{"FILE_ACTION_RENAMED_OLD_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ACTION_RENAMED_OLD_NAME)},
	{"FILE_ACTION_RENAMED_NEW_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ACTION_RENAMED_NEW_NAME)},
	{"COPY_FILE_FAIL_IF_EXISTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, COPY_FILE_FAIL_IF_EXISTS)},
	{"COPY_FILE_COPY_SYMLINK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, COPY_FILE_COPY_SYMLINK)},
	{"MOVEFILE_REPLACE_EXISTING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, MOVEFILE_REPLACE_EXISTING)},
	{"MOVEFILE_COPY_ALLOWED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, MOVEFILE_COPY_ALLOWED)},
	{"DRIVE_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, DRIVE_UNKNOWN)},
	{"DRIVE_NO_ROOT_DIR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, DRIVE_NO_ROOT_DIR)},
	{"DRIVE_REMOVABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, DRIVE_REMOVABLE)},
	{"DRIVE_FIXED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, DRIVE_FIXED)},
	{"DRIVE_REMOTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, DRIVE_REMOTE)},
	{"DRIVE_CDROM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, DRIVE_CDROM)},
	{"DRIVE_RAMDISK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, DRIVE_RAMDISK)},
	{"OWNER_SECURITY_INFORMATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, OWNER_SECURITY_INFORMATION)},
	{"GROUP_SECURITY_INFORMATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, GROUP_SECURITY_INFORMATION)},
	{"DACL_SECURITY_INFORMATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, DACL_SECURITY_INFORMATION)},
	{"SACL_SECURITY_INFORMATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SACL_SECURITY_INFORMATION)},
	{"SidTypeUser", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SidTypeUser)},
	{"SidTypeGroup", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SidTypeGroup)},
	{"SidTypeDomain", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SidTypeDomain)},
	{"SidTypeAlias", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SidTypeAlias)},
	{"SidTypeWellKnownGroup", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SidTypeWellKnownGroup)},
	{"SidTypeDeletedAccount", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SidTypeDeletedAccount)},
	{"SidTypeInvalid", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SidTypeInvalid)},
	{"SidTypeUnknown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SidTypeUnknown)},
	{"SidTypeComputer", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SidTypeComputer)},
	{"ACCESS_ALLOWED_ACE_TYPE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ACCESS_ALLOWED_ACE_TYPE)},
	{"ACCESS_DENIED_ACE_TYPE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, ACCESS_DENIED_ACE_TYPE)},
	{"OBJECT_INHERIT_ACE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, OBJECT_INHERIT_ACE)},
	{"CONTAINER_INHERIT_ACE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, CONTAINER_INHERIT_ACE)},
	{"NO_PROPAGATE_INHERIT_ACE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, NO_PROPAGATE_INHERIT_ACE)},
	{"INHERIT_ONLY_ACE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, INHERIT_ONLY_ACE)},
	{"DELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, DELETE)},
	{"READ_CONTROL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, READ_CONTROL)},
	{"WRITE_DAC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, WRITE_DAC)},
	{"WRITE_OWNER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, WRITE_OWNER)},
	{"SYNCHRONIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SYNCHRONIZE)},
	{"FILE_LIST_DIRECTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_LIST_DIRECTORY)},
	{"FILE_READ_DATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_READ_DATA)},
	{"FILE_WRITE_DATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_WRITE_DATA)},
	{"FILE_APPEND_DATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_APPEND_DATA)},
	{"FILE_READ_EA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_READ_EA)},
	{"FILE_WRITE_EA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_WRITE_EA)},
	{"FILE_EXECUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_EXECUTE)},
	{"FILE_DELETE_CHILD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_DELETE_CHILD)},
	{"FILE_READ_ATTRIBUTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_READ_ATTRIBUTES)},
	{"FILE_WRITE_ATTRIBUTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_WRITE_ATTRIBUTES)},
	{"FILE_GENERIC_READ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_GENERIC_READ)},
	{"FILE_GENERIC_WRITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_GENERIC_WRITE)},
	{"FILE_GENERIC_EXECUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_GENERIC_EXECUTE)},
	{"FILE_ALL_ACCESS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, FILE_ALL_ACCESS)},
	{"TOKEN_DUPLICATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, TOKEN_DUPLICATE)},
	{"TOKEN_IMPERSONATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, TOKEN_IMPERSONATE)},
	{"TOKEN_QUERY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, TOKEN_QUERY)},
	{"TOKEN_ADJUST_PRIVILEGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, TOKEN_ADJUST_PRIVILEGES)},
	{"SE_PRIVILEGE_ENABLED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, SE_PRIVILEGE_ENABLED)},
	{"TokenUser", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, TokenUser)},
	{"PROCESS_QUERY_INFORMATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowsConstants, PROCESS_QUERY_INFORMATION)},
	{}
};

$MethodInfo _WindowsConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsConstants::*)()>(&WindowsConstants::init$))},
	{}
};

$ClassInfo _WindowsConstants_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsConstants",
	"java.lang.Object",
	nullptr,
	_WindowsConstants_FieldInfo_,
	_WindowsConstants_MethodInfo_
};

$Object* allocate$WindowsConstants($Class* clazz) {
	return $of($alloc(WindowsConstants));
}

void WindowsConstants::init$() {
}

WindowsConstants::WindowsConstants() {
}

$Class* WindowsConstants::load$($String* name, bool initialize) {
	$loadClass(WindowsConstants, name, initialize, &_WindowsConstants_ClassInfo_, allocate$WindowsConstants);
	return class$;
}

$Class* WindowsConstants::class$ = nullptr;

		} // fs
	} // nio
} // sun