#include <sun/nio/fs/WindowsNativeDispatcher.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/NativeBuffers.h>
#include <sun/nio/fs/WindowsConstants.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsNativeDispatcher$Account.h>
#include <sun/nio/fs/WindowsNativeDispatcher$AclInformation.h>
#include <sun/nio/fs/WindowsNativeDispatcher$CompletionStatus.h>
#include <sun/nio/fs/WindowsNativeDispatcher$DiskFreeSpace.h>
#include <sun/nio/fs/WindowsNativeDispatcher$FirstFile.h>
#include <sun/nio/fs/WindowsNativeDispatcher$FirstStream.h>
#include <sun/nio/fs/WindowsNativeDispatcher$VolumeInformation.h>
#include <jcpp.h>

#undef ARRAY_CHAR_BASE_OFFSET
#undef MAX_VALUE
#undef INVALID_HANDLE_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $NativeBuffers = ::sun::nio::fs::NativeBuffers;
using $WindowsConstants = ::sun::nio::fs::WindowsConstants;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsNativeDispatcher$Account = ::sun::nio::fs::WindowsNativeDispatcher$Account;
using $WindowsNativeDispatcher$AclInformation = ::sun::nio::fs::WindowsNativeDispatcher$AclInformation;
using $WindowsNativeDispatcher$CompletionStatus = ::sun::nio::fs::WindowsNativeDispatcher$CompletionStatus;
using $WindowsNativeDispatcher$DiskFreeSpace = ::sun::nio::fs::WindowsNativeDispatcher$DiskFreeSpace;
using $WindowsNativeDispatcher$FirstFile = ::sun::nio::fs::WindowsNativeDispatcher$FirstFile;
using $WindowsNativeDispatcher$FirstStream = ::sun::nio::fs::WindowsNativeDispatcher$FirstStream;
using $WindowsNativeDispatcher$VolumeInformation = ::sun::nio::fs::WindowsNativeDispatcher$VolumeInformation;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsNativeDispatcher_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsNativeDispatcher, unsafe)},
	{}
};

$MethodInfo _WindowsNativeDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsNativeDispatcher::*)()>(&WindowsNativeDispatcher::init$))},
	{"AccessCheck", "(JJIIIII)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&WindowsNativeDispatcher::AccessCheck)), "sun.nio.fs.WindowsException"},
	{"AddAccessAllowedAceEx", "(JIIJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int32_t,int64_t)>(&WindowsNativeDispatcher::AddAccessAllowedAceEx)), "sun.nio.fs.WindowsException"},
	{"AddAccessDeniedAceEx", "(JIIJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int32_t,int64_t)>(&WindowsNativeDispatcher::AddAccessDeniedAceEx)), "sun.nio.fs.WindowsException"},
	{"AdjustTokenPrivileges", "(JJI)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t)>(&WindowsNativeDispatcher::AdjustTokenPrivileges)), "sun.nio.fs.WindowsException"},
	{"CancelIo", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&WindowsNativeDispatcher::CancelIo)), "sun.nio.fs.WindowsException"},
	{"CloseHandle", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&WindowsNativeDispatcher::CloseHandle))},
	{"ConvertSidToStringSid", "(J)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t)>(&WindowsNativeDispatcher::ConvertSidToStringSid)), "sun.nio.fs.WindowsException"},
	{"ConvertStringSidToSid", "(Ljava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($String*)>(&WindowsNativeDispatcher::ConvertStringSidToSid)), "sun.nio.fs.WindowsException"},
	{"ConvertStringSidToSid0", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&WindowsNativeDispatcher::ConvertStringSidToSid0)), "sun.nio.fs.WindowsException"},
	{"CopyFileEx", "(Ljava/lang/String;Ljava/lang/String;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,int32_t,int64_t)>(&WindowsNativeDispatcher::CopyFileEx)), "sun.nio.fs.WindowsException"},
	{"CopyFileEx0", "(JJIJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t,int64_t)>(&WindowsNativeDispatcher::CopyFileEx0)), "sun.nio.fs.WindowsException"},
	{"CreateDirectory", "(Ljava/lang/String;J)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int64_t)>(&WindowsNativeDispatcher::CreateDirectory)), "sun.nio.fs.WindowsException"},
	{"CreateDirectory0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::CreateDirectory0)), "sun.nio.fs.WindowsException"},
	{"CreateEvent", "(ZZ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(bool,bool)>(&WindowsNativeDispatcher::CreateEvent)), "sun.nio.fs.WindowsException"},
	{"CreateFile", "(Ljava/lang/String;IIJII)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($String*,int32_t,int32_t,int64_t,int32_t,int32_t)>(&WindowsNativeDispatcher::CreateFile)), "sun.nio.fs.WindowsException"},
	{"CreateFile", "(Ljava/lang/String;IIII)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($String*,int32_t,int32_t,int32_t,int32_t)>(&WindowsNativeDispatcher::CreateFile)), "sun.nio.fs.WindowsException"},
	{"CreateFile0", "(JIIJII)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int32_t,int32_t,int64_t,int32_t,int32_t)>(&WindowsNativeDispatcher::CreateFile0)), "sun.nio.fs.WindowsException"},
	{"CreateHardLink", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*)>(&WindowsNativeDispatcher::CreateHardLink)), "sun.nio.fs.WindowsException"},
	{"CreateHardLink0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::CreateHardLink0)), "sun.nio.fs.WindowsException"},
	{"CreateIoCompletionPort", "(JJJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t)>(&WindowsNativeDispatcher::CreateIoCompletionPort)), "sun.nio.fs.WindowsException"},
	{"CreateSymbolicLink", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,int32_t)>(&WindowsNativeDispatcher::CreateSymbolicLink)), "sun.nio.fs.WindowsException"},
	{"CreateSymbolicLink0", "(JJI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t)>(&WindowsNativeDispatcher::CreateSymbolicLink0)), "sun.nio.fs.WindowsException"},
	{"DeleteFile", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&WindowsNativeDispatcher::DeleteFile)), "sun.nio.fs.WindowsException"},
	{"DeleteFile0", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&WindowsNativeDispatcher::DeleteFile0)), "sun.nio.fs.WindowsException"},
	{"DeviceIoControlGetReparsePoint", "(JJI)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t)>(&WindowsNativeDispatcher::DeviceIoControlGetReparsePoint)), "sun.nio.fs.WindowsException"},
	{"DeviceIoControlSetSparse", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&WindowsNativeDispatcher::DeviceIoControlSetSparse)), "sun.nio.fs.WindowsException"},
	{"DuplicateTokenEx", "(JI)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&WindowsNativeDispatcher::DuplicateTokenEx)), "sun.nio.fs.WindowsException"},
	{"FindClose", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&WindowsNativeDispatcher::FindClose)), "sun.nio.fs.WindowsException"},
	{"FindFirstFile", "(Ljava/lang/String;)Lsun/nio/fs/WindowsNativeDispatcher$FirstFile;", nullptr, $STATIC, $method(static_cast<$WindowsNativeDispatcher$FirstFile*(*)($String*)>(&WindowsNativeDispatcher::FindFirstFile)), "sun.nio.fs.WindowsException"},
	{"FindFirstFile", "(Ljava/lang/String;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($String*,int64_t)>(&WindowsNativeDispatcher::FindFirstFile)), "sun.nio.fs.WindowsException"},
	{"FindFirstFile0", "(JLsun/nio/fs/WindowsNativeDispatcher$FirstFile;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$WindowsNativeDispatcher$FirstFile*)>(&WindowsNativeDispatcher::FindFirstFile0)), "sun.nio.fs.WindowsException"},
	{"FindFirstFile1", "(JJ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::FindFirstFile1)), "sun.nio.fs.WindowsException"},
	{"FindFirstStream", "(Ljava/lang/String;)Lsun/nio/fs/WindowsNativeDispatcher$FirstStream;", nullptr, $STATIC, $method(static_cast<$WindowsNativeDispatcher$FirstStream*(*)($String*)>(&WindowsNativeDispatcher::FindFirstStream)), "sun.nio.fs.WindowsException"},
	{"FindFirstStream0", "(JLsun/nio/fs/WindowsNativeDispatcher$FirstStream;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$WindowsNativeDispatcher$FirstStream*)>(&WindowsNativeDispatcher::FindFirstStream0)), "sun.nio.fs.WindowsException"},
	{"FindNextFile", "(JJ)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::FindNextFile)), "sun.nio.fs.WindowsException"},
	{"FindNextStream", "(J)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t)>(&WindowsNativeDispatcher::FindNextStream)), "sun.nio.fs.WindowsException"},
	{"FormatMessage", "(I)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&WindowsNativeDispatcher::FormatMessage))},
	{"GetAce", "(JI)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&WindowsNativeDispatcher::GetAce))},
	{"GetAclInformation", "(J)Lsun/nio/fs/WindowsNativeDispatcher$AclInformation;", nullptr, $STATIC, $method(static_cast<$WindowsNativeDispatcher$AclInformation*(*)(int64_t)>(&WindowsNativeDispatcher::GetAclInformation))},
	{"GetAclInformation0", "(JLsun/nio/fs/WindowsNativeDispatcher$AclInformation;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$WindowsNativeDispatcher$AclInformation*)>(&WindowsNativeDispatcher::GetAclInformation0))},
	{"GetCurrentProcess", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&WindowsNativeDispatcher::GetCurrentProcess))},
	{"GetCurrentThread", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&WindowsNativeDispatcher::GetCurrentThread))},
	{"GetDiskFreeSpace", "(Ljava/lang/String;)Lsun/nio/fs/WindowsNativeDispatcher$DiskFreeSpace;", nullptr, $STATIC, $method(static_cast<$WindowsNativeDispatcher$DiskFreeSpace*(*)($String*)>(&WindowsNativeDispatcher::GetDiskFreeSpace)), "sun.nio.fs.WindowsException"},
	{"GetDiskFreeSpace0", "(JLsun/nio/fs/WindowsNativeDispatcher$DiskFreeSpace;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$WindowsNativeDispatcher$DiskFreeSpace*)>(&WindowsNativeDispatcher::GetDiskFreeSpace0)), "sun.nio.fs.WindowsException"},
	{"GetDiskFreeSpaceEx", "(Ljava/lang/String;)Lsun/nio/fs/WindowsNativeDispatcher$DiskFreeSpace;", nullptr, $STATIC, $method(static_cast<$WindowsNativeDispatcher$DiskFreeSpace*(*)($String*)>(&WindowsNativeDispatcher::GetDiskFreeSpaceEx)), "sun.nio.fs.WindowsException"},
	{"GetDiskFreeSpaceEx0", "(JLsun/nio/fs/WindowsNativeDispatcher$DiskFreeSpace;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$WindowsNativeDispatcher$DiskFreeSpace*)>(&WindowsNativeDispatcher::GetDiskFreeSpaceEx0)), "sun.nio.fs.WindowsException"},
	{"GetDriveType", "(Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*)>(&WindowsNativeDispatcher::GetDriveType)), "sun.nio.fs.WindowsException"},
	{"GetDriveType0", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&WindowsNativeDispatcher::GetDriveType0)), "sun.nio.fs.WindowsException"},
	{"GetFileAttributes", "(Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*)>(&WindowsNativeDispatcher::GetFileAttributes)), "sun.nio.fs.WindowsException"},
	{"GetFileAttributes0", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&WindowsNativeDispatcher::GetFileAttributes0)), "sun.nio.fs.WindowsException"},
	{"GetFileAttributesEx", "(Ljava/lang/String;J)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int64_t)>(&WindowsNativeDispatcher::GetFileAttributesEx)), "sun.nio.fs.WindowsException"},
	{"GetFileAttributesEx0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::GetFileAttributesEx0)), "sun.nio.fs.WindowsException"},
	{"GetFileInformationByHandle", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::GetFileInformationByHandle)), "sun.nio.fs.WindowsException"},
	{"GetFileSecurity", "(Ljava/lang/String;IJI)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,int64_t,int32_t)>(&WindowsNativeDispatcher::GetFileSecurity)), "sun.nio.fs.WindowsException"},
	{"GetFileSecurity0", "(JIJI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t,int64_t,int32_t)>(&WindowsNativeDispatcher::GetFileSecurity0)), "sun.nio.fs.WindowsException"},
	{"GetFileSizeEx", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&WindowsNativeDispatcher::GetFileSizeEx)), "sun.nio.fs.WindowsException"},
	{"GetFinalPathNameByHandle", "(J)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t)>(&WindowsNativeDispatcher::GetFinalPathNameByHandle)), "sun.nio.fs.WindowsException"},
	{"GetFullPathName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&WindowsNativeDispatcher::GetFullPathName)), "sun.nio.fs.WindowsException"},
	{"GetFullPathName0", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t)>(&WindowsNativeDispatcher::GetFullPathName0)), "sun.nio.fs.WindowsException"},
	{"GetLengthSid", "(J)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&WindowsNativeDispatcher::GetLengthSid))},
	{"GetLogicalDrives", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WindowsNativeDispatcher::GetLogicalDrives)), "sun.nio.fs.WindowsException"},
	{"GetOverlappedResult", "(JJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::GetOverlappedResult)), "sun.nio.fs.WindowsException"},
	{"GetQueuedCompletionStatus", "(J)Lsun/nio/fs/WindowsNativeDispatcher$CompletionStatus;", nullptr, $STATIC, $method(static_cast<$WindowsNativeDispatcher$CompletionStatus*(*)(int64_t)>(&WindowsNativeDispatcher::GetQueuedCompletionStatus)), "sun.nio.fs.WindowsException"},
	{"GetQueuedCompletionStatus0", "(JLsun/nio/fs/WindowsNativeDispatcher$CompletionStatus;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$WindowsNativeDispatcher$CompletionStatus*)>(&WindowsNativeDispatcher::GetQueuedCompletionStatus0)), "sun.nio.fs.WindowsException"},
	{"GetSecurityDescriptorDacl", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&WindowsNativeDispatcher::GetSecurityDescriptorDacl))},
	{"GetSecurityDescriptorOwner", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&WindowsNativeDispatcher::GetSecurityDescriptorOwner)), "sun.nio.fs.WindowsException"},
	{"GetTokenInformation", "(JIJI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t,int64_t,int32_t)>(&WindowsNativeDispatcher::GetTokenInformation)), "sun.nio.fs.WindowsException"},
	{"GetVolumeInformation", "(Ljava/lang/String;)Lsun/nio/fs/WindowsNativeDispatcher$VolumeInformation;", nullptr, $STATIC, $method(static_cast<$WindowsNativeDispatcher$VolumeInformation*(*)($String*)>(&WindowsNativeDispatcher::GetVolumeInformation)), "sun.nio.fs.WindowsException"},
	{"GetVolumeInformation0", "(JLsun/nio/fs/WindowsNativeDispatcher$VolumeInformation;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$WindowsNativeDispatcher$VolumeInformation*)>(&WindowsNativeDispatcher::GetVolumeInformation0)), "sun.nio.fs.WindowsException"},
	{"GetVolumePathName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&WindowsNativeDispatcher::GetVolumePathName)), "sun.nio.fs.WindowsException"},
	{"GetVolumePathName0", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t)>(&WindowsNativeDispatcher::GetVolumePathName0)), "sun.nio.fs.WindowsException"},
	{"InitializeAcl", "(JI)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&WindowsNativeDispatcher::InitializeAcl)), "sun.nio.fs.WindowsException"},
	{"InitializeSecurityDescriptor", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&WindowsNativeDispatcher::InitializeSecurityDescriptor)), "sun.nio.fs.WindowsException"},
	{"LocalFree", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&WindowsNativeDispatcher::LocalFree))},
	{"LookupAccountName", "(Ljava/lang/String;JI)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,int64_t,int32_t)>(&WindowsNativeDispatcher::LookupAccountName)), "sun.nio.fs.WindowsException"},
	{"LookupAccountName0", "(JJI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int32_t)>(&WindowsNativeDispatcher::LookupAccountName0)), "sun.nio.fs.WindowsException"},
	{"LookupAccountSid", "(J)Lsun/nio/fs/WindowsNativeDispatcher$Account;", nullptr, $STATIC, $method(static_cast<$WindowsNativeDispatcher$Account*(*)(int64_t)>(&WindowsNativeDispatcher::LookupAccountSid)), "sun.nio.fs.WindowsException"},
	{"LookupAccountSid0", "(JLsun/nio/fs/WindowsNativeDispatcher$Account;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$WindowsNativeDispatcher$Account*)>(&WindowsNativeDispatcher::LookupAccountSid0)), "sun.nio.fs.WindowsException"},
	{"LookupPrivilegeValue", "(Ljava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($String*)>(&WindowsNativeDispatcher::LookupPrivilegeValue)), "sun.nio.fs.WindowsException"},
	{"LookupPrivilegeValue0", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&WindowsNativeDispatcher::LookupPrivilegeValue0)), "sun.nio.fs.WindowsException"},
	{"MoveFileEx", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,int32_t)>(&WindowsNativeDispatcher::MoveFileEx)), "sun.nio.fs.WindowsException"},
	{"MoveFileEx0", "(JJI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t)>(&WindowsNativeDispatcher::MoveFileEx0)), "sun.nio.fs.WindowsException"},
	{"OpenProcessToken", "(JI)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&WindowsNativeDispatcher::OpenProcessToken)), "sun.nio.fs.WindowsException"},
	{"OpenThreadToken", "(JIZ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int32_t,bool)>(&WindowsNativeDispatcher::OpenThreadToken)), "sun.nio.fs.WindowsException"},
	{"PostQueuedCompletionStatus", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::PostQueuedCompletionStatus)), "sun.nio.fs.WindowsException"},
	{"ReadDirectoryChangesW", "(JJIZIJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t,bool,int32_t,int64_t,int64_t)>(&WindowsNativeDispatcher::ReadDirectoryChangesW)), "sun.nio.fs.WindowsException"},
	{"RemoveDirectory", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&WindowsNativeDispatcher::RemoveDirectory)), "sun.nio.fs.WindowsException"},
	{"RemoveDirectory0", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&WindowsNativeDispatcher::RemoveDirectory0)), "sun.nio.fs.WindowsException"},
	{"SetEndOfFile", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&WindowsNativeDispatcher::SetEndOfFile)), "sun.nio.fs.WindowsException"},
	{"SetFileAttributes", "(Ljava/lang/String;I)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int32_t)>(&WindowsNativeDispatcher::SetFileAttributes)), "sun.nio.fs.WindowsException"},
	{"SetFileAttributes0", "(JI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&WindowsNativeDispatcher::SetFileAttributes0)), "sun.nio.fs.WindowsException"},
	{"SetFileSecurity", "(Ljava/lang/String;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int32_t,int64_t)>(&WindowsNativeDispatcher::SetFileSecurity)), "sun.nio.fs.WindowsException"},
	{"SetFileSecurity0", "(JIJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int64_t)>(&WindowsNativeDispatcher::SetFileSecurity0)), "sun.nio.fs.WindowsException"},
	{"SetFileTime", "(JJJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t)>(&WindowsNativeDispatcher::SetFileTime)), "sun.nio.fs.WindowsException"},
	{"SetSecurityDescriptorDacl", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::SetSecurityDescriptorDacl)), "sun.nio.fs.WindowsException"},
	{"SetSecurityDescriptorOwner", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::SetSecurityDescriptorOwner)), "sun.nio.fs.WindowsException"},
	{"SetThreadToken", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&WindowsNativeDispatcher::SetThreadToken)), "sun.nio.fs.WindowsException"},
	{"asNativeBuffer", "(Ljava/lang/String;)Lsun/nio/fs/NativeBuffer;", nullptr, $STATIC, $method(static_cast<$NativeBuffer*(*)($String*)>(&WindowsNativeDispatcher::asNativeBuffer)), "sun.nio.fs.WindowsException"},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WindowsNativeDispatcher::initIDs))},
	{}
};

#define _METHOD_INDEX_AccessCheck 1
#define _METHOD_INDEX_AddAccessAllowedAceEx 2
#define _METHOD_INDEX_AddAccessDeniedAceEx 3
#define _METHOD_INDEX_AdjustTokenPrivileges 4
#define _METHOD_INDEX_CancelIo 5
#define _METHOD_INDEX_CloseHandle 6
#define _METHOD_INDEX_ConvertSidToStringSid 7
#define _METHOD_INDEX_ConvertStringSidToSid0 9
#define _METHOD_INDEX_CopyFileEx0 11
#define _METHOD_INDEX_CreateDirectory0 13
#define _METHOD_INDEX_CreateEvent 14
#define _METHOD_INDEX_CreateFile0 17
#define _METHOD_INDEX_CreateHardLink0 19
#define _METHOD_INDEX_CreateIoCompletionPort 20
#define _METHOD_INDEX_CreateSymbolicLink0 22
#define _METHOD_INDEX_DeleteFile0 24
#define _METHOD_INDEX_DeviceIoControlGetReparsePoint 25
#define _METHOD_INDEX_DeviceIoControlSetSparse 26
#define _METHOD_INDEX_DuplicateTokenEx 27
#define _METHOD_INDEX_FindClose 28
#define _METHOD_INDEX_FindFirstFile0 31
#define _METHOD_INDEX_FindFirstFile1 32
#define _METHOD_INDEX_FindFirstStream0 34
#define _METHOD_INDEX_FindNextFile 35
#define _METHOD_INDEX_FindNextStream 36
#define _METHOD_INDEX_FormatMessage 37
#define _METHOD_INDEX_GetAce 38
#define _METHOD_INDEX_GetAclInformation0 40
#define _METHOD_INDEX_GetCurrentProcess 41
#define _METHOD_INDEX_GetCurrentThread 42
#define _METHOD_INDEX_GetDiskFreeSpace0 44
#define _METHOD_INDEX_GetDiskFreeSpaceEx0 46
#define _METHOD_INDEX_GetDriveType0 48
#define _METHOD_INDEX_GetFileAttributes0 50
#define _METHOD_INDEX_GetFileAttributesEx0 52
#define _METHOD_INDEX_GetFileInformationByHandle 53
#define _METHOD_INDEX_GetFileSecurity0 55
#define _METHOD_INDEX_GetFileSizeEx 56
#define _METHOD_INDEX_GetFinalPathNameByHandle 57
#define _METHOD_INDEX_GetFullPathName0 59
#define _METHOD_INDEX_GetLengthSid 60
#define _METHOD_INDEX_GetLogicalDrives 61
#define _METHOD_INDEX_GetOverlappedResult 62
#define _METHOD_INDEX_GetQueuedCompletionStatus0 64
#define _METHOD_INDEX_GetSecurityDescriptorDacl 65
#define _METHOD_INDEX_GetSecurityDescriptorOwner 66
#define _METHOD_INDEX_GetTokenInformation 67
#define _METHOD_INDEX_GetVolumeInformation0 69
#define _METHOD_INDEX_GetVolumePathName0 71
#define _METHOD_INDEX_InitializeAcl 72
#define _METHOD_INDEX_InitializeSecurityDescriptor 73
#define _METHOD_INDEX_LocalFree 74
#define _METHOD_INDEX_LookupAccountName0 76
#define _METHOD_INDEX_LookupAccountSid0 78
#define _METHOD_INDEX_LookupPrivilegeValue0 80
#define _METHOD_INDEX_MoveFileEx0 82
#define _METHOD_INDEX_OpenProcessToken 83
#define _METHOD_INDEX_OpenThreadToken 84
#define _METHOD_INDEX_PostQueuedCompletionStatus 85
#define _METHOD_INDEX_ReadDirectoryChangesW 86
#define _METHOD_INDEX_RemoveDirectory0 88
#define _METHOD_INDEX_SetEndOfFile 89
#define _METHOD_INDEX_SetFileAttributes0 91
#define _METHOD_INDEX_SetFileSecurity0 93
#define _METHOD_INDEX_SetFileTime 94
#define _METHOD_INDEX_SetSecurityDescriptorDacl 95
#define _METHOD_INDEX_SetSecurityDescriptorOwner 96
#define _METHOD_INDEX_SetThreadToken 97
#define _METHOD_INDEX_initIDs 99

$InnerClassInfo _WindowsNativeDispatcher_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsNativeDispatcher$CompletionStatus", "sun.nio.fs.WindowsNativeDispatcher", "CompletionStatus", $STATIC},
	{"sun.nio.fs.WindowsNativeDispatcher$Account", "sun.nio.fs.WindowsNativeDispatcher", "Account", $STATIC},
	{"sun.nio.fs.WindowsNativeDispatcher$AclInformation", "sun.nio.fs.WindowsNativeDispatcher", "AclInformation", $STATIC},
	{"sun.nio.fs.WindowsNativeDispatcher$DiskFreeSpace", "sun.nio.fs.WindowsNativeDispatcher", "DiskFreeSpace", $STATIC},
	{"sun.nio.fs.WindowsNativeDispatcher$VolumeInformation", "sun.nio.fs.WindowsNativeDispatcher", "VolumeInformation", $STATIC},
	{"sun.nio.fs.WindowsNativeDispatcher$FirstStream", "sun.nio.fs.WindowsNativeDispatcher", "FirstStream", $STATIC},
	{"sun.nio.fs.WindowsNativeDispatcher$FirstFile", "sun.nio.fs.WindowsNativeDispatcher", "FirstFile", $STATIC},
	{}
};

$ClassInfo _WindowsNativeDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsNativeDispatcher",
	"java.lang.Object",
	nullptr,
	_WindowsNativeDispatcher_FieldInfo_,
	_WindowsNativeDispatcher_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsNativeDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsNativeDispatcher$CompletionStatus,sun.nio.fs.WindowsNativeDispatcher$Account,sun.nio.fs.WindowsNativeDispatcher$AclInformation,sun.nio.fs.WindowsNativeDispatcher$DiskFreeSpace,sun.nio.fs.WindowsNativeDispatcher$VolumeInformation,sun.nio.fs.WindowsNativeDispatcher$FirstStream,sun.nio.fs.WindowsNativeDispatcher$FirstFile"
};

$Object* allocate$WindowsNativeDispatcher($Class* clazz) {
	return $of($alloc(WindowsNativeDispatcher));
}

$Unsafe* WindowsNativeDispatcher::unsafe = nullptr;

void WindowsNativeDispatcher::init$() {
}

int64_t WindowsNativeDispatcher::CreateEvent(bool bManualReset, bool bInitialState) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, CreateEvent, int64_t, bool bManualReset, bool bInitialState);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, CreateEvent, bManualReset, bInitialState);
	$finishNativeStatic();
	return $ret;
}

int64_t WindowsNativeDispatcher::CreateFile($String* path, int32_t dwDesiredAccess, int32_t dwShareMode, int64_t lpSecurityAttributes, int32_t dwCreationDisposition, int32_t dwFlagsAndAttributes) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = CreateFile0($nc(buffer)->address(), dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t WindowsNativeDispatcher::CreateFile($String* path, int32_t dwDesiredAccess, int32_t dwShareMode, int32_t dwCreationDisposition, int32_t dwFlagsAndAttributes) {
	$init(WindowsNativeDispatcher);
	return CreateFile(path, dwDesiredAccess, dwShareMode, 0, dwCreationDisposition, dwFlagsAndAttributes);
}

int64_t WindowsNativeDispatcher::CreateFile0(int64_t lpFileName, int32_t dwDesiredAccess, int32_t dwShareMode, int64_t lpSecurityAttributes, int32_t dwCreationDisposition, int32_t dwFlagsAndAttributes) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, CreateFile0, int64_t, int64_t lpFileName, int32_t dwDesiredAccess, int32_t dwShareMode, int64_t lpSecurityAttributes, int32_t dwCreationDisposition, int32_t dwFlagsAndAttributes);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, CreateFile0, lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes);
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::CloseHandle(int64_t handle) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, CloseHandle, void, int64_t handle);
	$invokeNativeStatic(WindowsNativeDispatcher, CloseHandle, handle);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::DeleteFile($String* path) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			DeleteFile0($nc(buffer)->address());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsNativeDispatcher::DeleteFile0(int64_t lpFileName) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, DeleteFile0, void, int64_t lpFileName);
	$invokeNativeStatic(WindowsNativeDispatcher, DeleteFile0, lpFileName);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::CreateDirectory($String* path, int64_t lpSecurityAttributes) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			CreateDirectory0($nc(buffer)->address(), lpSecurityAttributes);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsNativeDispatcher::CreateDirectory0(int64_t lpFileName, int64_t lpSecurityAttributes) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, CreateDirectory0, void, int64_t lpFileName, int64_t lpSecurityAttributes);
	$invokeNativeStatic(WindowsNativeDispatcher, CreateDirectory0, lpFileName, lpSecurityAttributes);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::RemoveDirectory($String* path) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			RemoveDirectory0($nc(buffer)->address());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsNativeDispatcher::RemoveDirectory0(int64_t lpFileName) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, RemoveDirectory0, void, int64_t lpFileName);
	$invokeNativeStatic(WindowsNativeDispatcher, RemoveDirectory0, lpFileName);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::DeviceIoControlSetSparse(int64_t handle) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, DeviceIoControlSetSparse, void, int64_t handle);
	$invokeNativeStatic(WindowsNativeDispatcher, DeviceIoControlSetSparse, handle);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::DeviceIoControlGetReparsePoint(int64_t handle, int64_t bufferAddress, int32_t bufferSize) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, DeviceIoControlGetReparsePoint, void, int64_t handle, int64_t bufferAddress, int32_t bufferSize);
	$invokeNativeStatic(WindowsNativeDispatcher, DeviceIoControlGetReparsePoint, handle, bufferAddress, bufferSize);
	$finishNativeStatic();
}

int64_t WindowsNativeDispatcher::GetFileSizeEx(int64_t handle) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetFileSizeEx, int64_t, int64_t handle);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetFileSizeEx, handle);
	$finishNativeStatic();
	return $ret;
}

$WindowsNativeDispatcher$FirstFile* WindowsNativeDispatcher::FindFirstFile($String* path) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		$var($WindowsNativeDispatcher$FirstFile, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($WindowsNativeDispatcher$FirstFile, data, $new($WindowsNativeDispatcher$FirstFile));
			FindFirstFile0($nc(buffer)->address(), data);
			$assign(var$2, data);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void WindowsNativeDispatcher::FindFirstFile0(int64_t lpFileName, $WindowsNativeDispatcher$FirstFile* obj) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, FindFirstFile0, void, int64_t lpFileName, $WindowsNativeDispatcher$FirstFile* obj);
	$invokeNativeStatic(WindowsNativeDispatcher, FindFirstFile0, lpFileName, obj);
	$finishNativeStatic();
}

int64_t WindowsNativeDispatcher::FindFirstFile($String* path, int64_t address) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = FindFirstFile1($nc(buffer)->address(), address);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t WindowsNativeDispatcher::FindFirstFile1(int64_t lpFileName, int64_t address) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, FindFirstFile1, int64_t, int64_t lpFileName, int64_t address);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, FindFirstFile1, lpFileName, address);
	$finishNativeStatic();
	return $ret;
}

$String* WindowsNativeDispatcher::FindNextFile(int64_t handle, int64_t address) {
	$init(WindowsNativeDispatcher);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(WindowsNativeDispatcher, FindNextFile, $String*, int64_t handle, int64_t address);
	$assign($ret, $invokeNativeStatic(WindowsNativeDispatcher, FindNextFile, handle, address));
	$finishNativeStatic();
	return $ret;
}

$WindowsNativeDispatcher$FirstStream* WindowsNativeDispatcher::FindFirstStream($String* path) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		$var($WindowsNativeDispatcher$FirstStream, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($WindowsNativeDispatcher$FirstStream, data, $new($WindowsNativeDispatcher$FirstStream));
			FindFirstStream0($nc(buffer)->address(), data);
			if (data->handle() == $WindowsConstants::INVALID_HANDLE_VALUE) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, data);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void WindowsNativeDispatcher::FindFirstStream0(int64_t lpFileName, $WindowsNativeDispatcher$FirstStream* obj) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, FindFirstStream0, void, int64_t lpFileName, $WindowsNativeDispatcher$FirstStream* obj);
	$invokeNativeStatic(WindowsNativeDispatcher, FindFirstStream0, lpFileName, obj);
	$finishNativeStatic();
}

$String* WindowsNativeDispatcher::FindNextStream(int64_t handle) {
	$init(WindowsNativeDispatcher);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(WindowsNativeDispatcher, FindNextStream, $String*, int64_t handle);
	$assign($ret, $invokeNativeStatic(WindowsNativeDispatcher, FindNextStream, handle));
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::FindClose(int64_t handle) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, FindClose, void, int64_t handle);
	$invokeNativeStatic(WindowsNativeDispatcher, FindClose, handle);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::GetFileInformationByHandle(int64_t handle, int64_t address) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, GetFileInformationByHandle, void, int64_t handle, int64_t address);
	$invokeNativeStatic(WindowsNativeDispatcher, GetFileInformationByHandle, handle, address);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::CopyFileEx($String* source, $String* target, int32_t flags, int64_t addressToPollForCancel) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, sourceBuffer, asNativeBuffer(source));
	$var($NativeBuffer, targetBuffer, asNativeBuffer(target));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $nc(sourceBuffer)->address();
			CopyFileEx0(var$1, $nc(targetBuffer)->address(), flags, addressToPollForCancel);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(targetBuffer)->release();
			$nc(sourceBuffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsNativeDispatcher::CopyFileEx0(int64_t existingAddress, int64_t newAddress, int32_t flags, int64_t addressToPollForCancel) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, CopyFileEx0, void, int64_t existingAddress, int64_t newAddress, int32_t flags, int64_t addressToPollForCancel);
	$invokeNativeStatic(WindowsNativeDispatcher, CopyFileEx0, existingAddress, newAddress, flags, addressToPollForCancel);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::MoveFileEx($String* source, $String* target, int32_t flags) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, sourceBuffer, asNativeBuffer(source));
	$var($NativeBuffer, targetBuffer, asNativeBuffer(target));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $nc(sourceBuffer)->address();
			MoveFileEx0(var$1, $nc(targetBuffer)->address(), flags);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(targetBuffer)->release();
			$nc(sourceBuffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsNativeDispatcher::MoveFileEx0(int64_t existingAddress, int64_t newAddress, int32_t flags) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, MoveFileEx0, void, int64_t existingAddress, int64_t newAddress, int32_t flags);
	$invokeNativeStatic(WindowsNativeDispatcher, MoveFileEx0, existingAddress, newAddress, flags);
	$finishNativeStatic();
}

int32_t WindowsNativeDispatcher::GetFileAttributes($String* path) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = GetFileAttributes0($nc(buffer)->address());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t WindowsNativeDispatcher::GetFileAttributes0(int64_t lpFileName) {
	$init(WindowsNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetFileAttributes0, int32_t, int64_t lpFileName);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetFileAttributes0, lpFileName);
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::SetFileAttributes($String* path, int32_t dwFileAttributes) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			SetFileAttributes0($nc(buffer)->address(), dwFileAttributes);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsNativeDispatcher::SetFileAttributes0(int64_t lpFileName, int32_t dwFileAttributes) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, SetFileAttributes0, void, int64_t lpFileName, int32_t dwFileAttributes);
	$invokeNativeStatic(WindowsNativeDispatcher, SetFileAttributes0, lpFileName, dwFileAttributes);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::GetFileAttributesEx($String* path, int64_t address) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			GetFileAttributesEx0($nc(buffer)->address(), address);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsNativeDispatcher::GetFileAttributesEx0(int64_t lpFileName, int64_t address) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, GetFileAttributesEx0, void, int64_t lpFileName, int64_t address);
	$invokeNativeStatic(WindowsNativeDispatcher, GetFileAttributesEx0, lpFileName, address);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::SetFileTime(int64_t handle, int64_t createTime, int64_t lastAccessTime, int64_t lastWriteTime) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, SetFileTime, void, int64_t handle, int64_t createTime, int64_t lastAccessTime, int64_t lastWriteTime);
	$invokeNativeStatic(WindowsNativeDispatcher, SetFileTime, handle, createTime, lastAccessTime, lastWriteTime);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::SetEndOfFile(int64_t handle) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, SetEndOfFile, void, int64_t handle);
	$invokeNativeStatic(WindowsNativeDispatcher, SetEndOfFile, handle);
	$finishNativeStatic();
}

int32_t WindowsNativeDispatcher::GetLogicalDrives() {
	$init(WindowsNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetLogicalDrives, int32_t);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetLogicalDrives);
	$finishNativeStatic();
	return $ret;
}

$WindowsNativeDispatcher$VolumeInformation* WindowsNativeDispatcher::GetVolumeInformation($String* root) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(root));
	{
		$var($Throwable, var$0, nullptr);
		$var($WindowsNativeDispatcher$VolumeInformation, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($WindowsNativeDispatcher$VolumeInformation, info, $new($WindowsNativeDispatcher$VolumeInformation));
			GetVolumeInformation0($nc(buffer)->address(), info);
			$assign(var$2, info);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void WindowsNativeDispatcher::GetVolumeInformation0(int64_t lpRoot, $WindowsNativeDispatcher$VolumeInformation* obj) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, GetVolumeInformation0, void, int64_t lpRoot, $WindowsNativeDispatcher$VolumeInformation* obj);
	$invokeNativeStatic(WindowsNativeDispatcher, GetVolumeInformation0, lpRoot, obj);
	$finishNativeStatic();
}

int32_t WindowsNativeDispatcher::GetDriveType($String* root) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(root));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = GetDriveType0($nc(buffer)->address());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t WindowsNativeDispatcher::GetDriveType0(int64_t lpRoot) {
	$init(WindowsNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetDriveType0, int32_t, int64_t lpRoot);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetDriveType0, lpRoot);
	$finishNativeStatic();
	return $ret;
}

$WindowsNativeDispatcher$DiskFreeSpace* WindowsNativeDispatcher::GetDiskFreeSpaceEx($String* path) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		$var($WindowsNativeDispatcher$DiskFreeSpace, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($WindowsNativeDispatcher$DiskFreeSpace, space, $new($WindowsNativeDispatcher$DiskFreeSpace));
			GetDiskFreeSpaceEx0($nc(buffer)->address(), space);
			$assign(var$2, space);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$WindowsNativeDispatcher$DiskFreeSpace* WindowsNativeDispatcher::GetDiskFreeSpace($String* path) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		$var($WindowsNativeDispatcher$DiskFreeSpace, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($WindowsNativeDispatcher$DiskFreeSpace, space, $new($WindowsNativeDispatcher$DiskFreeSpace));
			GetDiskFreeSpace0($nc(buffer)->address(), space);
			$assign(var$2, space);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void WindowsNativeDispatcher::GetDiskFreeSpaceEx0(int64_t lpDirectoryName, $WindowsNativeDispatcher$DiskFreeSpace* obj) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, GetDiskFreeSpaceEx0, void, int64_t lpDirectoryName, $WindowsNativeDispatcher$DiskFreeSpace* obj);
	$invokeNativeStatic(WindowsNativeDispatcher, GetDiskFreeSpaceEx0, lpDirectoryName, obj);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::GetDiskFreeSpace0(int64_t lpRootPathName, $WindowsNativeDispatcher$DiskFreeSpace* obj) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, GetDiskFreeSpace0, void, int64_t lpRootPathName, $WindowsNativeDispatcher$DiskFreeSpace* obj);
	$invokeNativeStatic(WindowsNativeDispatcher, GetDiskFreeSpace0, lpRootPathName, obj);
	$finishNativeStatic();
}

$String* WindowsNativeDispatcher::GetVolumePathName($String* path) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, GetVolumePathName0($nc(buffer)->address()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$String* WindowsNativeDispatcher::GetVolumePathName0(int64_t lpFileName) {
	$init(WindowsNativeDispatcher);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(WindowsNativeDispatcher, GetVolumePathName0, $String*, int64_t lpFileName);
	$assign($ret, $invokeNativeStatic(WindowsNativeDispatcher, GetVolumePathName0, lpFileName));
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::InitializeSecurityDescriptor(int64_t sdAddress) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, InitializeSecurityDescriptor, void, int64_t sdAddress);
	$invokeNativeStatic(WindowsNativeDispatcher, InitializeSecurityDescriptor, sdAddress);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::InitializeAcl(int64_t aclAddress, int32_t size) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, InitializeAcl, void, int64_t aclAddress, int32_t size);
	$invokeNativeStatic(WindowsNativeDispatcher, InitializeAcl, aclAddress, size);
	$finishNativeStatic();
}

int32_t WindowsNativeDispatcher::GetFileSecurity($String* path, int32_t requestedInformation, int64_t pSecurityDescriptor, int32_t nLength) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = GetFileSecurity0($nc(buffer)->address(), requestedInformation, pSecurityDescriptor, nLength);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t WindowsNativeDispatcher::GetFileSecurity0(int64_t lpFileName, int32_t requestedInformation, int64_t pSecurityDescriptor, int32_t nLength) {
	$init(WindowsNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetFileSecurity0, int32_t, int64_t lpFileName, int32_t requestedInformation, int64_t pSecurityDescriptor, int32_t nLength);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetFileSecurity0, lpFileName, requestedInformation, pSecurityDescriptor, nLength);
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::SetFileSecurity($String* path, int32_t securityInformation, int64_t pSecurityDescriptor) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			SetFileSecurity0($nc(buffer)->address(), securityInformation, pSecurityDescriptor);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsNativeDispatcher::SetFileSecurity0(int64_t lpFileName, int32_t securityInformation, int64_t pSecurityDescriptor) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, SetFileSecurity0, void, int64_t lpFileName, int32_t securityInformation, int64_t pSecurityDescriptor);
	$invokeNativeStatic(WindowsNativeDispatcher, SetFileSecurity0, lpFileName, securityInformation, pSecurityDescriptor);
	$finishNativeStatic();
}

int64_t WindowsNativeDispatcher::GetSecurityDescriptorOwner(int64_t pSecurityDescriptor) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetSecurityDescriptorOwner, int64_t, int64_t pSecurityDescriptor);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetSecurityDescriptorOwner, pSecurityDescriptor);
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::SetSecurityDescriptorOwner(int64_t pSecurityDescriptor, int64_t pOwner) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, SetSecurityDescriptorOwner, void, int64_t pSecurityDescriptor, int64_t pOwner);
	$invokeNativeStatic(WindowsNativeDispatcher, SetSecurityDescriptorOwner, pSecurityDescriptor, pOwner);
	$finishNativeStatic();
}

int64_t WindowsNativeDispatcher::GetSecurityDescriptorDacl(int64_t pSecurityDescriptor) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetSecurityDescriptorDacl, int64_t, int64_t pSecurityDescriptor);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetSecurityDescriptorDacl, pSecurityDescriptor);
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::SetSecurityDescriptorDacl(int64_t pSecurityDescriptor, int64_t pAcl) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, SetSecurityDescriptorDacl, void, int64_t pSecurityDescriptor, int64_t pAcl);
	$invokeNativeStatic(WindowsNativeDispatcher, SetSecurityDescriptorDacl, pSecurityDescriptor, pAcl);
	$finishNativeStatic();
}

$WindowsNativeDispatcher$AclInformation* WindowsNativeDispatcher::GetAclInformation(int64_t aclAddress) {
	$init(WindowsNativeDispatcher);
	$var($WindowsNativeDispatcher$AclInformation, info, $new($WindowsNativeDispatcher$AclInformation));
	GetAclInformation0(aclAddress, info);
	return info;
}

void WindowsNativeDispatcher::GetAclInformation0(int64_t aclAddress, $WindowsNativeDispatcher$AclInformation* obj) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, GetAclInformation0, void, int64_t aclAddress, $WindowsNativeDispatcher$AclInformation* obj);
	$invokeNativeStatic(WindowsNativeDispatcher, GetAclInformation0, aclAddress, obj);
	$finishNativeStatic();
}

int64_t WindowsNativeDispatcher::GetAce(int64_t aclAddress, int32_t aceIndex) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetAce, int64_t, int64_t aclAddress, int32_t aceIndex);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetAce, aclAddress, aceIndex);
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::AddAccessAllowedAceEx(int64_t aclAddress, int32_t flags, int32_t mask, int64_t sidAddress) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, AddAccessAllowedAceEx, void, int64_t aclAddress, int32_t flags, int32_t mask, int64_t sidAddress);
	$invokeNativeStatic(WindowsNativeDispatcher, AddAccessAllowedAceEx, aclAddress, flags, mask, sidAddress);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::AddAccessDeniedAceEx(int64_t aclAddress, int32_t flags, int32_t mask, int64_t sidAddress) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, AddAccessDeniedAceEx, void, int64_t aclAddress, int32_t flags, int32_t mask, int64_t sidAddress);
	$invokeNativeStatic(WindowsNativeDispatcher, AddAccessDeniedAceEx, aclAddress, flags, mask, sidAddress);
	$finishNativeStatic();
}

$WindowsNativeDispatcher$Account* WindowsNativeDispatcher::LookupAccountSid(int64_t sidAddress) {
	$init(WindowsNativeDispatcher);
	$var($WindowsNativeDispatcher$Account, acc, $new($WindowsNativeDispatcher$Account));
	LookupAccountSid0(sidAddress, acc);
	return acc;
}

void WindowsNativeDispatcher::LookupAccountSid0(int64_t sidAddress, $WindowsNativeDispatcher$Account* obj) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, LookupAccountSid0, void, int64_t sidAddress, $WindowsNativeDispatcher$Account* obj);
	$invokeNativeStatic(WindowsNativeDispatcher, LookupAccountSid0, sidAddress, obj);
	$finishNativeStatic();
}

int32_t WindowsNativeDispatcher::LookupAccountName($String* accountName, int64_t pSid, int32_t cbSid) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(accountName));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = LookupAccountName0($nc(buffer)->address(), pSid, cbSid);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t WindowsNativeDispatcher::LookupAccountName0(int64_t lpAccountName, int64_t pSid, int32_t cbSid) {
	$init(WindowsNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, LookupAccountName0, int32_t, int64_t lpAccountName, int64_t pSid, int32_t cbSid);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, LookupAccountName0, lpAccountName, pSid, cbSid);
	$finishNativeStatic();
	return $ret;
}

int32_t WindowsNativeDispatcher::GetLengthSid(int64_t sidAddress) {
	$init(WindowsNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetLengthSid, int32_t, int64_t sidAddress);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetLengthSid, sidAddress);
	$finishNativeStatic();
	return $ret;
}

$String* WindowsNativeDispatcher::ConvertSidToStringSid(int64_t sidAddress) {
	$init(WindowsNativeDispatcher);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(WindowsNativeDispatcher, ConvertSidToStringSid, $String*, int64_t sidAddress);
	$assign($ret, $invokeNativeStatic(WindowsNativeDispatcher, ConvertSidToStringSid, sidAddress));
	$finishNativeStatic();
	return $ret;
}

int64_t WindowsNativeDispatcher::ConvertStringSidToSid($String* sidString) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(sidString));
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = ConvertStringSidToSid0($nc(buffer)->address());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t WindowsNativeDispatcher::ConvertStringSidToSid0(int64_t lpStringSid) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, ConvertStringSidToSid0, int64_t, int64_t lpStringSid);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, ConvertStringSidToSid0, lpStringSid);
	$finishNativeStatic();
	return $ret;
}

int64_t WindowsNativeDispatcher::GetCurrentProcess() {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetCurrentProcess, int64_t);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetCurrentProcess);
	$finishNativeStatic();
	return $ret;
}

int64_t WindowsNativeDispatcher::GetCurrentThread() {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetCurrentThread, int64_t);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetCurrentThread);
	$finishNativeStatic();
	return $ret;
}

int64_t WindowsNativeDispatcher::OpenProcessToken(int64_t hProcess, int32_t desiredAccess) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, OpenProcessToken, int64_t, int64_t hProcess, int32_t desiredAccess);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, OpenProcessToken, hProcess, desiredAccess);
	$finishNativeStatic();
	return $ret;
}

int64_t WindowsNativeDispatcher::OpenThreadToken(int64_t hThread, int32_t desiredAccess, bool openAsSelf) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, OpenThreadToken, int64_t, int64_t hThread, int32_t desiredAccess, bool openAsSelf);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, OpenThreadToken, hThread, desiredAccess, openAsSelf);
	$finishNativeStatic();
	return $ret;
}

int64_t WindowsNativeDispatcher::DuplicateTokenEx(int64_t hThread, int32_t desiredAccess) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, DuplicateTokenEx, int64_t, int64_t hThread, int32_t desiredAccess);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, DuplicateTokenEx, hThread, desiredAccess);
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::SetThreadToken(int64_t thread, int64_t hToken) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, SetThreadToken, void, int64_t thread, int64_t hToken);
	$invokeNativeStatic(WindowsNativeDispatcher, SetThreadToken, thread, hToken);
	$finishNativeStatic();
}

int32_t WindowsNativeDispatcher::GetTokenInformation(int64_t token, int32_t tokenInfoClass, int64_t pTokenInfo, int32_t tokenInfoLength) {
	$init(WindowsNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetTokenInformation, int32_t, int64_t token, int32_t tokenInfoClass, int64_t pTokenInfo, int32_t tokenInfoLength);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetTokenInformation, token, tokenInfoClass, pTokenInfo, tokenInfoLength);
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::AdjustTokenPrivileges(int64_t token, int64_t luid, int32_t attributes) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, AdjustTokenPrivileges, void, int64_t token, int64_t luid, int32_t attributes);
	$invokeNativeStatic(WindowsNativeDispatcher, AdjustTokenPrivileges, token, luid, attributes);
	$finishNativeStatic();
}

bool WindowsNativeDispatcher::AccessCheck(int64_t token, int64_t securityInfo, int32_t accessMask, int32_t genericRead, int32_t genericWrite, int32_t genericExecute, int32_t genericAll) {
	$init(WindowsNativeDispatcher);
	bool $ret = false;
	$prepareNativeStatic(WindowsNativeDispatcher, AccessCheck, bool, int64_t token, int64_t securityInfo, int32_t accessMask, int32_t genericRead, int32_t genericWrite, int32_t genericExecute, int32_t genericAll);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, AccessCheck, token, securityInfo, accessMask, genericRead, genericWrite, genericExecute, genericAll);
	$finishNativeStatic();
	return $ret;
}

int64_t WindowsNativeDispatcher::LookupPrivilegeValue($String* name) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(name));
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = LookupPrivilegeValue0($nc(buffer)->address());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t WindowsNativeDispatcher::LookupPrivilegeValue0(int64_t lpName) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, LookupPrivilegeValue0, int64_t, int64_t lpName);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, LookupPrivilegeValue0, lpName);
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::CreateSymbolicLink($String* link, $String* target, int32_t flags) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, linkBuffer, asNativeBuffer(link));
	$var($NativeBuffer, targetBuffer, asNativeBuffer(target));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				int64_t var$2 = $nc(linkBuffer)->address();
				CreateSymbolicLink0(var$2, $nc(targetBuffer)->address(), flags);
			} catch ($WindowsException&) {
				$var($WindowsException, x, $catch());
				if (x->lastError() == 1314) {
					flags |= 2;
					try {
						int64_t var$3 = $nc(linkBuffer)->address();
						CreateSymbolicLink0(var$3, $nc(targetBuffer)->address(), flags);
						return;
					} catch ($WindowsException&) {
						$catch();
					}
				}
				$throw(x);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(targetBuffer)->release();
			$nc(linkBuffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void WindowsNativeDispatcher::CreateSymbolicLink0(int64_t linkAddress, int64_t targetAddress, int32_t flags) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, CreateSymbolicLink0, void, int64_t linkAddress, int64_t targetAddress, int32_t flags);
	$invokeNativeStatic(WindowsNativeDispatcher, CreateSymbolicLink0, linkAddress, targetAddress, flags);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::CreateHardLink($String* newFile, $String* existingFile) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, newFileBuffer, asNativeBuffer(newFile));
	$var($NativeBuffer, existingFileBuffer, asNativeBuffer(existingFile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $nc(newFileBuffer)->address();
			CreateHardLink0(var$1, $nc(existingFileBuffer)->address());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(existingFileBuffer)->release();
			$nc(newFileBuffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsNativeDispatcher::CreateHardLink0(int64_t newFileBuffer, int64_t existingFileBuffer) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, CreateHardLink0, void, int64_t newFileBuffer, int64_t existingFileBuffer);
	$invokeNativeStatic(WindowsNativeDispatcher, CreateHardLink0, newFileBuffer, existingFileBuffer);
	$finishNativeStatic();
}

$String* WindowsNativeDispatcher::GetFullPathName($String* path) {
	$init(WindowsNativeDispatcher);
	$var($NativeBuffer, buffer, asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, GetFullPathName0($nc(buffer)->address()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$String* WindowsNativeDispatcher::GetFullPathName0(int64_t pathAddress) {
	$init(WindowsNativeDispatcher);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(WindowsNativeDispatcher, GetFullPathName0, $String*, int64_t pathAddress);
	$assign($ret, $invokeNativeStatic(WindowsNativeDispatcher, GetFullPathName0, pathAddress));
	$finishNativeStatic();
	return $ret;
}

$String* WindowsNativeDispatcher::GetFinalPathNameByHandle(int64_t handle) {
	$init(WindowsNativeDispatcher);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(WindowsNativeDispatcher, GetFinalPathNameByHandle, $String*, int64_t handle);
	$assign($ret, $invokeNativeStatic(WindowsNativeDispatcher, GetFinalPathNameByHandle, handle));
	$finishNativeStatic();
	return $ret;
}

$String* WindowsNativeDispatcher::FormatMessage(int32_t errorCode) {
	$init(WindowsNativeDispatcher);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(WindowsNativeDispatcher, FormatMessage, $String*, int32_t errorCode);
	$assign($ret, $invokeNativeStatic(WindowsNativeDispatcher, FormatMessage, errorCode));
	$finishNativeStatic();
	return $ret;
}

void WindowsNativeDispatcher::LocalFree(int64_t address) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, LocalFree, void, int64_t address);
	$invokeNativeStatic(WindowsNativeDispatcher, LocalFree, address);
	$finishNativeStatic();
}

int64_t WindowsNativeDispatcher::CreateIoCompletionPort(int64_t fileHandle, int64_t existingPort, int64_t completionKey) {
	$init(WindowsNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, CreateIoCompletionPort, int64_t, int64_t fileHandle, int64_t existingPort, int64_t completionKey);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, CreateIoCompletionPort, fileHandle, existingPort, completionKey);
	$finishNativeStatic();
	return $ret;
}

$WindowsNativeDispatcher$CompletionStatus* WindowsNativeDispatcher::GetQueuedCompletionStatus(int64_t completionPort) {
	$init(WindowsNativeDispatcher);
	$var($WindowsNativeDispatcher$CompletionStatus, status, $new($WindowsNativeDispatcher$CompletionStatus));
	GetQueuedCompletionStatus0(completionPort, status);
	return status;
}

void WindowsNativeDispatcher::GetQueuedCompletionStatus0(int64_t completionPort, $WindowsNativeDispatcher$CompletionStatus* status) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, GetQueuedCompletionStatus0, void, int64_t completionPort, $WindowsNativeDispatcher$CompletionStatus* status);
	$invokeNativeStatic(WindowsNativeDispatcher, GetQueuedCompletionStatus0, completionPort, status);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::PostQueuedCompletionStatus(int64_t completionPort, int64_t completionKey) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, PostQueuedCompletionStatus, void, int64_t completionPort, int64_t completionKey);
	$invokeNativeStatic(WindowsNativeDispatcher, PostQueuedCompletionStatus, completionPort, completionKey);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::ReadDirectoryChangesW(int64_t hDirectory, int64_t bufferAddress, int32_t bufferLength, bool watchSubTree, int32_t filter, int64_t bytesReturnedAddress, int64_t pOverlapped) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, ReadDirectoryChangesW, void, int64_t hDirectory, int64_t bufferAddress, int32_t bufferLength, bool watchSubTree, int32_t filter, int64_t bytesReturnedAddress, int64_t pOverlapped);
	$invokeNativeStatic(WindowsNativeDispatcher, ReadDirectoryChangesW, hDirectory, bufferAddress, bufferLength, watchSubTree, filter, bytesReturnedAddress, pOverlapped);
	$finishNativeStatic();
}

void WindowsNativeDispatcher::CancelIo(int64_t hFile) {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, CancelIo, void, int64_t hFile);
	$invokeNativeStatic(WindowsNativeDispatcher, CancelIo, hFile);
	$finishNativeStatic();
}

int32_t WindowsNativeDispatcher::GetOverlappedResult(int64_t hFile, int64_t lpOverlapped) {
	$init(WindowsNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(WindowsNativeDispatcher, GetOverlappedResult, int32_t, int64_t hFile, int64_t lpOverlapped);
	$ret = $invokeNativeStatic(WindowsNativeDispatcher, GetOverlappedResult, hFile, lpOverlapped);
	$finishNativeStatic();
	return $ret;
}

$NativeBuffer* WindowsNativeDispatcher::asNativeBuffer($String* s) {
	$init(WindowsNativeDispatcher);
	if ($nc(s)->length() > ($Integer::MAX_VALUE - 2) / 2) {
		$throwNew($WindowsException, "String too long to convert to native buffer"_s);
	}
	int32_t stringLengthInBytes = $nc(s)->length() << 1;
	int32_t sizeInBytes = stringLengthInBytes + 2;
	$var($NativeBuffer, buffer, $NativeBuffers::getNativeBufferFromCache(sizeInBytes));
	if (buffer == nullptr) {
		$assign(buffer, $NativeBuffers::allocNativeBuffer(sizeInBytes));
	} else if ($equals($nc(buffer)->owner(), s)) {
		return buffer;
	}
	$var($chars, chars, s->toCharArray());
	$init($Unsafe);
	$nc(WindowsNativeDispatcher::unsafe)->copyMemory(chars, $Unsafe::ARRAY_CHAR_BASE_OFFSET, nullptr, $nc(buffer)->address(), (int64_t)stringLengthInBytes);
	$nc(WindowsNativeDispatcher::unsafe)->putChar($nc(buffer)->address() + stringLengthInBytes, (char16_t)0);
	$nc(buffer)->setOwner(s);
	return buffer;
}

void WindowsNativeDispatcher::initIDs() {
	$init(WindowsNativeDispatcher);
	$prepareNativeStatic(WindowsNativeDispatcher, initIDs, void);
	$invokeNativeStatic(WindowsNativeDispatcher, initIDs);
	$finishNativeStatic();
}

void clinit$WindowsNativeDispatcher($Class* class$) {
	$assignStatic(WindowsNativeDispatcher::unsafe, $Unsafe::getUnsafe());
	{
		$BootLoader::loadLibrary("net"_s);
		$BootLoader::loadLibrary("nio"_s);
		WindowsNativeDispatcher::initIDs();
	}
}

WindowsNativeDispatcher::WindowsNativeDispatcher() {
}

$Class* WindowsNativeDispatcher::load$($String* name, bool initialize) {
	$loadClass(WindowsNativeDispatcher, name, initialize, &_WindowsNativeDispatcher_ClassInfo_, clinit$WindowsNativeDispatcher, allocate$WindowsNativeDispatcher);
	return class$;
}

$Class* WindowsNativeDispatcher::class$ = nullptr;

		} // fs
	} // nio
} // sun