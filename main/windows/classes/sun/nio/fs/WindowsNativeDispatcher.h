#ifndef _sun_nio_fs_WindowsNativeDispatcher_h_
#define _sun_nio_fs_WindowsNativeDispatcher_h_
//$ class sun.nio.fs.WindowsNativeDispatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class NativeBuffer;
			class WindowsNativeDispatcher$Account;
			class WindowsNativeDispatcher$AclInformation;
			class WindowsNativeDispatcher$CompletionStatus;
			class WindowsNativeDispatcher$DiskFreeSpace;
			class WindowsNativeDispatcher$FirstFile;
			class WindowsNativeDispatcher$FirstStream;
			class WindowsNativeDispatcher$VolumeInformation;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsNativeDispatcher : public ::java::lang::Object {
	$class(WindowsNativeDispatcher, 0, ::java::lang::Object)
public:
	WindowsNativeDispatcher();
	void init$();
	static bool AccessCheck(int64_t token, int64_t securityInfo, int32_t accessMask, int32_t genericRead, int32_t genericWrite, int32_t genericExecute, int32_t genericAll);
	static void AddAccessAllowedAceEx(int64_t aclAddress, int32_t flags, int32_t mask, int64_t sidAddress);
	static void AddAccessDeniedAceEx(int64_t aclAddress, int32_t flags, int32_t mask, int64_t sidAddress);
	static void AdjustTokenPrivileges(int64_t token, int64_t luid, int32_t attributes);
	static void CancelIo(int64_t hFile);
	static void CloseHandle(int64_t handle);
	static $String* ConvertSidToStringSid(int64_t sidAddress);
	static int64_t ConvertStringSidToSid($String* sidString);
	static int64_t ConvertStringSidToSid0(int64_t lpStringSid);
	static void CopyFileEx($String* source, $String* target, int32_t flags, int64_t addressToPollForCancel);
	static void CopyFileEx0(int64_t existingAddress, int64_t newAddress, int32_t flags, int64_t addressToPollForCancel);
	static void CreateDirectory($String* path, int64_t lpSecurityAttributes);
	static void CreateDirectory0(int64_t lpFileName, int64_t lpSecurityAttributes);
	static int64_t CreateEvent(bool bManualReset, bool bInitialState);
	static int64_t CreateFile($String* path, int32_t dwDesiredAccess, int32_t dwShareMode, int64_t lpSecurityAttributes, int32_t dwCreationDisposition, int32_t dwFlagsAndAttributes);
	static int64_t CreateFile($String* path, int32_t dwDesiredAccess, int32_t dwShareMode, int32_t dwCreationDisposition, int32_t dwFlagsAndAttributes);
	static int64_t CreateFile0(int64_t lpFileName, int32_t dwDesiredAccess, int32_t dwShareMode, int64_t lpSecurityAttributes, int32_t dwCreationDisposition, int32_t dwFlagsAndAttributes);
	static void CreateHardLink($String* newFile, $String* existingFile);
	static void CreateHardLink0(int64_t newFileBuffer, int64_t existingFileBuffer);
	static int64_t CreateIoCompletionPort(int64_t fileHandle, int64_t existingPort, int64_t completionKey);
	static void CreateSymbolicLink($String* link, $String* target, int32_t flags);
	static void CreateSymbolicLink0(int64_t linkAddress, int64_t targetAddress, int32_t flags);
	static void DeleteFile($String* path);
	static void DeleteFile0(int64_t lpFileName);
	static void DeviceIoControlGetReparsePoint(int64_t handle, int64_t bufferAddress, int32_t bufferSize);
	static void DeviceIoControlSetSparse(int64_t handle);
	static int64_t DuplicateTokenEx(int64_t hThread, int32_t desiredAccess);
	static void FindClose(int64_t handle);
	static ::sun::nio::fs::WindowsNativeDispatcher$FirstFile* FindFirstFile($String* path);
	static int64_t FindFirstFile($String* path, int64_t address);
	static void FindFirstFile0(int64_t lpFileName, ::sun::nio::fs::WindowsNativeDispatcher$FirstFile* obj);
	static int64_t FindFirstFile1(int64_t lpFileName, int64_t address);
	static ::sun::nio::fs::WindowsNativeDispatcher$FirstStream* FindFirstStream($String* path);
	static void FindFirstStream0(int64_t lpFileName, ::sun::nio::fs::WindowsNativeDispatcher$FirstStream* obj);
	static $String* FindNextFile(int64_t handle, int64_t address);
	static $String* FindNextStream(int64_t handle);
	static $String* FormatMessage(int32_t errorCode);
	static int64_t GetAce(int64_t aclAddress, int32_t aceIndex);
	static ::sun::nio::fs::WindowsNativeDispatcher$AclInformation* GetAclInformation(int64_t aclAddress);
	static void GetAclInformation0(int64_t aclAddress, ::sun::nio::fs::WindowsNativeDispatcher$AclInformation* obj);
	static int64_t GetCurrentProcess();
	static int64_t GetCurrentThread();
	static ::sun::nio::fs::WindowsNativeDispatcher$DiskFreeSpace* GetDiskFreeSpace($String* path);
	static void GetDiskFreeSpace0(int64_t lpRootPathName, ::sun::nio::fs::WindowsNativeDispatcher$DiskFreeSpace* obj);
	static ::sun::nio::fs::WindowsNativeDispatcher$DiskFreeSpace* GetDiskFreeSpaceEx($String* path);
	static void GetDiskFreeSpaceEx0(int64_t lpDirectoryName, ::sun::nio::fs::WindowsNativeDispatcher$DiskFreeSpace* obj);
	static int32_t GetDriveType($String* root);
	static int32_t GetDriveType0(int64_t lpRoot);
	static int32_t GetFileAttributes($String* path);
	static int32_t GetFileAttributes0(int64_t lpFileName);
	static void GetFileAttributesEx($String* path, int64_t address);
	static void GetFileAttributesEx0(int64_t lpFileName, int64_t address);
	static void GetFileInformationByHandle(int64_t handle, int64_t address);
	static int32_t GetFileSecurity($String* path, int32_t requestedInformation, int64_t pSecurityDescriptor, int32_t nLength);
	static int32_t GetFileSecurity0(int64_t lpFileName, int32_t requestedInformation, int64_t pSecurityDescriptor, int32_t nLength);
	static int64_t GetFileSizeEx(int64_t handle);
	static $String* GetFinalPathNameByHandle(int64_t handle);
	static $String* GetFullPathName($String* path);
	static $String* GetFullPathName0(int64_t pathAddress);
	static int32_t GetLengthSid(int64_t sidAddress);
	static int32_t GetLogicalDrives();
	static int32_t GetOverlappedResult(int64_t hFile, int64_t lpOverlapped);
	static ::sun::nio::fs::WindowsNativeDispatcher$CompletionStatus* GetQueuedCompletionStatus(int64_t completionPort);
	static void GetQueuedCompletionStatus0(int64_t completionPort, ::sun::nio::fs::WindowsNativeDispatcher$CompletionStatus* status);
	static int64_t GetSecurityDescriptorDacl(int64_t pSecurityDescriptor);
	static int64_t GetSecurityDescriptorOwner(int64_t pSecurityDescriptor);
	static int32_t GetTokenInformation(int64_t token, int32_t tokenInfoClass, int64_t pTokenInfo, int32_t tokenInfoLength);
	static ::sun::nio::fs::WindowsNativeDispatcher$VolumeInformation* GetVolumeInformation($String* root);
	static void GetVolumeInformation0(int64_t lpRoot, ::sun::nio::fs::WindowsNativeDispatcher$VolumeInformation* obj);
	static $String* GetVolumePathName($String* path);
	static $String* GetVolumePathName0(int64_t lpFileName);
	static void InitializeAcl(int64_t aclAddress, int32_t size);
	static void InitializeSecurityDescriptor(int64_t sdAddress);
	static void LocalFree(int64_t address);
	static int32_t LookupAccountName($String* accountName, int64_t pSid, int32_t cbSid);
	static int32_t LookupAccountName0(int64_t lpAccountName, int64_t pSid, int32_t cbSid);
	static ::sun::nio::fs::WindowsNativeDispatcher$Account* LookupAccountSid(int64_t sidAddress);
	static void LookupAccountSid0(int64_t sidAddress, ::sun::nio::fs::WindowsNativeDispatcher$Account* obj);
	static int64_t LookupPrivilegeValue($String* name);
	static int64_t LookupPrivilegeValue0(int64_t lpName);
	static void MoveFileEx($String* source, $String* target, int32_t flags);
	static void MoveFileEx0(int64_t existingAddress, int64_t newAddress, int32_t flags);
	static int64_t OpenProcessToken(int64_t hProcess, int32_t desiredAccess);
	static int64_t OpenThreadToken(int64_t hThread, int32_t desiredAccess, bool openAsSelf);
	static void PostQueuedCompletionStatus(int64_t completionPort, int64_t completionKey);
	static void ReadDirectoryChangesW(int64_t hDirectory, int64_t bufferAddress, int32_t bufferLength, bool watchSubTree, int32_t filter, int64_t bytesReturnedAddress, int64_t pOverlapped);
	static void RemoveDirectory($String* path);
	static void RemoveDirectory0(int64_t lpFileName);
	static void SetEndOfFile(int64_t handle);
	static void SetFileAttributes($String* path, int32_t dwFileAttributes);
	static void SetFileAttributes0(int64_t lpFileName, int32_t dwFileAttributes);
	static void SetFileSecurity($String* path, int32_t securityInformation, int64_t pSecurityDescriptor);
	static void SetFileSecurity0(int64_t lpFileName, int32_t securityInformation, int64_t pSecurityDescriptor);
	static void SetFileTime(int64_t handle, int64_t createTime, int64_t lastAccessTime, int64_t lastWriteTime);
	static void SetSecurityDescriptorDacl(int64_t pSecurityDescriptor, int64_t pAcl);
	static void SetSecurityDescriptorOwner(int64_t pSecurityDescriptor, int64_t pOwner);
	static void SetThreadToken(int64_t thread, int64_t hToken);
	static ::sun::nio::fs::NativeBuffer* asNativeBuffer($String* s);
	static void initIDs();
	static ::jdk::internal::misc::Unsafe* unsafe;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsNativeDispatcher_h_