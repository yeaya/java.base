#include <sun/nio/fs/WindowsFileCopy.h>

#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/AtomicMoveNotSupportedException.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryNotEmptyException.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/FileAlreadyExistsException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/LinkPermission.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/ExecutionException.h>
#include <sun/nio/fs/Cancellable.h>
#include <sun/nio/fs/ExtendedOptions$InternalOption.h>
#include <sun/nio/fs/ExtendedOptions.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/WindowsAclFileAttributeView.h>
#include <sun/nio/fs/WindowsDirectoryStream.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsFileAttributeViews$Dos.h>
#include <sun/nio/fs/WindowsFileAttributeViews.h>
#include <sun/nio/fs/WindowsFileAttributes.h>
#include <sun/nio/fs/WindowsFileCopy$1.h>
#include <sun/nio/fs/WindowsLinkSupport.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath.h>
#include <sun/nio/fs/WindowsSecurity$Privilege.h>
#include <sun/nio/fs/WindowsSecurity.h>
#include <jcpp.h>

#undef INTERRUPTIBLE
#undef ATOMIC_MOVE
#undef COPY_ATTRIBUTES
#undef NOFOLLOW_LINKS
#undef REPLACE_EXISTING

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AtomicMoveNotSupportedException = ::java::nio::file::AtomicMoveNotSupportedException;
using $CopyOption = ::java::nio::file::CopyOption;
using $DirectoryNotEmptyException = ::java::nio::file::DirectoryNotEmptyException;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileAlreadyExistsException = ::java::nio::file::FileAlreadyExistsException;
using $LinkOption = ::java::nio::file::LinkOption;
using $LinkPermission = ::java::nio::file::LinkPermission;
using $Path = ::java::nio::file::Path;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Iterator = ::java::util::Iterator;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $Cancellable = ::sun::nio::fs::Cancellable;
using $ExtendedOptions = ::sun::nio::fs::ExtendedOptions;
using $ExtendedOptions$InternalOption = ::sun::nio::fs::ExtendedOptions$InternalOption;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $WindowsAclFileAttributeView = ::sun::nio::fs::WindowsAclFileAttributeView;
using $WindowsDirectoryStream = ::sun::nio::fs::WindowsDirectoryStream;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsFileAttributeViews = ::sun::nio::fs::WindowsFileAttributeViews;
using $WindowsFileAttributeViews$Dos = ::sun::nio::fs::WindowsFileAttributeViews$Dos;
using $WindowsFileAttributes = ::sun::nio::fs::WindowsFileAttributes;
using $WindowsFileCopy$1 = ::sun::nio::fs::WindowsFileCopy$1;
using $WindowsLinkSupport = ::sun::nio::fs::WindowsLinkSupport;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsPath = ::sun::nio::fs::WindowsPath;
using $WindowsSecurity = ::sun::nio::fs::WindowsSecurity;
using $WindowsSecurity$Privilege = ::sun::nio::fs::WindowsSecurity$Privilege;

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0 : public $DirectoryStream$Filter {
	$class(WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0, $NO_CLASS_INIT, $DirectoryStream$Filter)
public:
	void init$() {
	}
	virtual bool accept(Object$* e) override {
		 return WindowsFileCopy::lambda$ensureEmptyDir$0($cast($Path, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0::*)()>(&WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.fs.WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0",
	"java.lang.Object",
	"java.nio.file.DirectoryStream$Filter",
	nullptr,
	methodInfos
};
$Class* WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0::load$($String* name, bool initialize) {
	$loadClass(WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0::class$ = nullptr;

$FieldInfo _WindowsFileCopy_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsFileCopy, $assertionsDisabled)},
	{}
};

$MethodInfo _WindowsFileCopy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileCopy::*)()>(&WindowsFileCopy::init$))},
	{"asWin32Path", "(Lsun/nio/fs/WindowsPath;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($WindowsPath*)>(&WindowsFileCopy::asWin32Path)), "java.io.IOException"},
	{"copy", "(Lsun/nio/fs/WindowsPath;Lsun/nio/fs/WindowsPath;[Ljava/nio/file/CopyOption;)V", nullptr, $STATIC | $TRANSIENT, $method(static_cast<void(*)($WindowsPath*,$WindowsPath*,$CopyOptionArray*)>(&WindowsFileCopy::copy)), "java.io.IOException"},
	{"copySecurityAttributes", "(Lsun/nio/fs/WindowsPath;Lsun/nio/fs/WindowsPath;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($WindowsPath*,$WindowsPath*,bool)>(&WindowsFileCopy::copySecurityAttributes)), "java.io.IOException"},
	{"ensureEmptyDir", "(Lsun/nio/fs/WindowsPath;)V", nullptr, $STATIC, $method(static_cast<void(*)($WindowsPath*)>(&WindowsFileCopy::ensureEmptyDir)), "java.io.IOException"},
	{"lambda$ensureEmptyDir$0", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Path*)>(&WindowsFileCopy::lambda$ensureEmptyDir$0)), "java.io.IOException"},
	{"move", "(Lsun/nio/fs/WindowsPath;Lsun/nio/fs/WindowsPath;[Ljava/nio/file/CopyOption;)V", nullptr, $STATIC | $TRANSIENT, $method(static_cast<void(*)($WindowsPath*,$WindowsPath*,$CopyOptionArray*)>(&WindowsFileCopy::move)), "java.io.IOException"},
	{}
};

$InnerClassInfo _WindowsFileCopy_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsFileCopy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileCopy_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsFileCopy",
	"java.lang.Object",
	nullptr,
	_WindowsFileCopy_FieldInfo_,
	_WindowsFileCopy_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFileCopy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsFileCopy$1"
};

$Object* allocate$WindowsFileCopy($Class* clazz) {
	return $of($alloc(WindowsFileCopy));
}

bool WindowsFileCopy::$assertionsDisabled = false;

void WindowsFileCopy::init$() {
}

void WindowsFileCopy::copy($WindowsPath* source, $WindowsPath* target, $CopyOptionArray* options) {
	$init(WindowsFileCopy);
	bool replaceExisting = false;
	bool copyAttributes = false;
	bool followLinks = true;
	bool interruptible = false;
	{
		$var($CopyOptionArray, arr$, options);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CopyOption, option, arr$->get(i$));
			{
				$init($StandardCopyOption);
				if ($equals(option, $StandardCopyOption::REPLACE_EXISTING)) {
					replaceExisting = true;
					continue;
				}
				$init($LinkOption);
				if ($equals(option, $LinkOption::NOFOLLOW_LINKS)) {
					followLinks = false;
					continue;
				}
				if ($equals(option, $StandardCopyOption::COPY_ATTRIBUTES)) {
					copyAttributes = true;
					continue;
				}
				$init($ExtendedOptions);
				if ($nc($ExtendedOptions::INTERRUPTIBLE)->matches(option)) {
					interruptible = true;
					continue;
				}
				if (option == nullptr) {
					$throwNew($NullPointerException);
				}
				$throwNew($UnsupportedOperationException, "Unsupported copy option"_s);
			}
		}
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$nc(source)->checkRead();
		$nc(target)->checkWrite();
	}
	$var($WindowsFileAttributes, sourceAttrs, nullptr);
	$var($WindowsFileAttributes, targetAttrs, nullptr);
	int64_t sourceHandle = 0;
	try {
		sourceHandle = $nc(source)->openForReadAttributeAccess(followLinks);
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(source);
	}
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(sourceAttrs, $WindowsFileAttributes::readAttributes(sourceHandle));
			} catch ($WindowsException&) {
				$var($WindowsException, x, $catch());
				x->rethrowAsIOException(source);
			}
			int64_t targetHandle = 0;
			try {
				targetHandle = $nc(target)->openForReadAttributeAccess(false);
				{
					$var($Throwable, var$2, nullptr);
					bool return$3 = false;
					try {
						$assign(targetAttrs, $WindowsFileAttributes::readAttributes(targetHandle));
						if ($WindowsFileAttributes::isSameFile(sourceAttrs, targetAttrs)) {
							return$3 = true;
							goto $finally1;
						}
						if (!replaceExisting) {
							$throwNew($FileAlreadyExistsException, $(target->getPathForExceptionMessage()));
						}
					} catch ($Throwable&) {
						$assign(var$2, $catch());
					} $finally1: {
						$WindowsNativeDispatcher::CloseHandle(targetHandle);
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
					if (return$3) {
						return;
					}
				}
			} catch ($WindowsException&) {
				$catch();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$WindowsNativeDispatcher::CloseHandle(sourceHandle);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
	if (sm != nullptr && $nc(sourceAttrs)->isSymbolicLink()) {
		sm->checkPermission($$new($LinkPermission, "symbolic"_s));
	}
	if ($nc(sourceAttrs)->isUnixDomainSocket()) {
		$throwNew($IOException, "Can not copy socket file"_s);
	}
	$var($String, sourcePath, asWin32Path(source));
	$var($String, targetPath, asWin32Path(target));
	if (targetAttrs != nullptr) {
		try {
			bool var$4 = targetAttrs->isDirectory();
			if (var$4 || targetAttrs->isDirectoryLink()) {
				$WindowsNativeDispatcher::RemoveDirectory(targetPath);
			} else {
				$WindowsNativeDispatcher::DeleteFile(targetPath);
			}
		} catch ($WindowsException&) {
			$var($WindowsException, x, $catch());
			if (targetAttrs->isDirectory()) {
				bool var$5 = x->lastError() == 145;
				if (var$5 || x->lastError() == 183) {
					$throwNew($DirectoryNotEmptyException, $($nc(target)->getPathForExceptionMessage()));
				}
			}
			x->rethrowAsIOException(target);
		}
	}
	bool var$6 = !$nc(sourceAttrs)->isDirectory();
	if (var$6 && !sourceAttrs->isDirectoryLink()) {
		int32_t flags = (!followLinks) ? 2048 : 0;
		if (interruptible) {
			$var($Cancellable, copyTask, $new($WindowsFileCopy$1, sourcePath, targetPath, flags, source, target));
			try {
				$Cancellable::runInterruptibly(copyTask);
			} catch ($ExecutionException&) {
				$var($ExecutionException, e, $catch());
				$var($Throwable, t, e->getCause());
				if ($instanceOf($IOException, t)) {
					$throw($cast($IOException, t));
				}
				$throwNew($IOException, t);
			}
		} else {
			try {
				$WindowsNativeDispatcher::CopyFileEx(sourcePath, targetPath, flags, 0);
			} catch ($WindowsException&) {
				$var($WindowsException, x, $catch());
				x->rethrowAsIOException(source, target);
			}
		}
		if (copyAttributes) {
			try {
				copySecurityAttributes(source, target, followLinks);
			} catch ($IOException&) {
				$catch();
			}
		}
		return;
	}
	try {
		if ($nc(sourceAttrs)->isDirectory()) {
			$WindowsNativeDispatcher::CreateDirectory(targetPath, 0);
		} else {
			$var($String, linkTarget, $WindowsLinkSupport::readLink(source));
			int32_t flags = 1;
			$WindowsNativeDispatcher::CreateSymbolicLink(targetPath, $($WindowsPath::addPrefixIfNeeded(linkTarget)), flags);
		}
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(target);
	}
	if (copyAttributes) {
		$var($WindowsFileAttributeViews$Dos, view, $WindowsFileAttributeViews::createDosView(target, false));
		try {
			$nc(view)->setAttributes(sourceAttrs);
		} catch ($IOException&) {
			$var($IOException, x, $catch());
			if ($nc(sourceAttrs)->isDirectory()) {
				try {
					$WindowsNativeDispatcher::RemoveDirectory(targetPath);
				} catch ($WindowsException&) {
					$catch();
				}
			}
		}
		try {
			copySecurityAttributes(source, target, followLinks);
		} catch ($IOException&) {
			$catch();
		}
	}
}

void WindowsFileCopy::ensureEmptyDir($WindowsPath* dir) {
	$init(WindowsFileCopy);
	{
		$var($WindowsDirectoryStream, dirStream, $new($WindowsDirectoryStream, dir, static_cast<$DirectoryStream$Filter*>($$new(WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0))));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if ($nc($(dirStream->iterator()))->hasNext()) {
						$throwNew($DirectoryNotEmptyException, $($nc(dir)->getPathForExceptionMessage()));
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						dirStream->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				dirStream->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void WindowsFileCopy::move($WindowsPath* source, $WindowsPath* target, $CopyOptionArray* options) {
	$init(WindowsFileCopy);
	bool atomicMove = false;
	bool replaceExisting = false;
	{
		$var($CopyOptionArray, arr$, options);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CopyOption, option, arr$->get(i$));
			{
				$init($StandardCopyOption);
				if ($equals(option, $StandardCopyOption::ATOMIC_MOVE)) {
					atomicMove = true;
					continue;
				}
				if ($equals(option, $StandardCopyOption::REPLACE_EXISTING)) {
					replaceExisting = true;
					continue;
				}
				$init($LinkOption);
				if ($equals(option, $LinkOption::NOFOLLOW_LINKS)) {
					continue;
				}
				if (option == nullptr) {
					$throwNew($NullPointerException);
				}
				$throwNew($UnsupportedOperationException, "Unsupported copy option"_s);
			}
		}
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$nc(source)->checkWrite();
		$nc(target)->checkWrite();
	}
	$var($String, sourcePath, asWin32Path(source));
	$var($String, targetPath, asWin32Path(target));
	if (atomicMove) {
		try {
			$WindowsNativeDispatcher::MoveFileEx(sourcePath, targetPath, 1);
		} catch ($WindowsException&) {
			$var($WindowsException, x, $catch());
			if (x->lastError() == 17) {
				$var($String, var$0, $nc(source)->getPathForExceptionMessage());
				$var($String, var$1, $nc(target)->getPathForExceptionMessage());
				$throwNew($AtomicMoveNotSupportedException, var$0, var$1, $(x->errorString()));
			}
			x->rethrowAsIOException(source, target);
		}
		return;
	}
	$var($WindowsFileAttributes, sourceAttrs, nullptr);
	$var($WindowsFileAttributes, targetAttrs, nullptr);
	int64_t sourceHandle = 0;
	try {
		sourceHandle = $nc(source)->openForReadAttributeAccess(false);
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(source);
	}
	{
		$var($Throwable, var$2, nullptr);
		bool return$3 = false;
		try {
			try {
				$assign(sourceAttrs, $WindowsFileAttributes::readAttributes(sourceHandle));
			} catch ($WindowsException&) {
				$var($WindowsException, x, $catch());
				x->rethrowAsIOException(source);
			}
			int64_t targetHandle = 0;
			try {
				targetHandle = $nc(target)->openForReadAttributeAccess(false);
				{
					$var($Throwable, var$4, nullptr);
					bool return$5 = false;
					try {
						$assign(targetAttrs, $WindowsFileAttributes::readAttributes(targetHandle));
						if ($WindowsFileAttributes::isSameFile(sourceAttrs, targetAttrs)) {
							return$5 = true;
							goto $finally1;
						}
						if (!replaceExisting) {
							$throwNew($FileAlreadyExistsException, $(target->getPathForExceptionMessage()));
						}
					} catch ($Throwable&) {
						$assign(var$4, $catch());
					} $finally1: {
						$WindowsNativeDispatcher::CloseHandle(targetHandle);
					}
					if (var$4 != nullptr) {
						$throw(var$4);
					}
					if (return$5) {
						return;
					}
				}
			} catch ($WindowsException&) {
				$catch();
			}
		} catch ($Throwable&) {
			$assign(var$2, $catch());
		} /*finally*/ {
			$WindowsNativeDispatcher::CloseHandle(sourceHandle);
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
		if (return$3) {
			return;
		}
	}
	if (targetAttrs != nullptr) {
		try {
			bool var$6 = targetAttrs->isDirectory();
			if (var$6 || targetAttrs->isDirectoryLink()) {
				$WindowsNativeDispatcher::RemoveDirectory(targetPath);
			} else {
				$WindowsNativeDispatcher::DeleteFile(targetPath);
			}
		} catch ($WindowsException&) {
			$var($WindowsException, x, $catch());
			if (targetAttrs->isDirectory()) {
				bool var$7 = x->lastError() == 145;
				if (var$7 || x->lastError() == 183) {
					$throwNew($DirectoryNotEmptyException, $($nc(target)->getPathForExceptionMessage()));
				}
			}
			x->rethrowAsIOException(target);
		}
	}
	try {
		$WindowsNativeDispatcher::MoveFileEx(sourcePath, targetPath, 0);
		return;
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		if (x->lastError() != 17) {
			x->rethrowAsIOException(source, target);
		}
	}
	bool var$8 = !$nc(sourceAttrs)->isDirectory();
	if (var$8 && !sourceAttrs->isDirectoryLink()) {
		try {
			$WindowsNativeDispatcher::MoveFileEx(sourcePath, targetPath, 2);
		} catch ($WindowsException&) {
			$var($WindowsException, x, $catch());
			x->rethrowAsIOException(source, target);
		}
		try {
			copySecurityAttributes(source, target, false);
		} catch ($IOException&) {
			$catch();
		}
		return;
	}
	bool var$9 = !WindowsFileCopy::$assertionsDisabled;
	if (var$9) {
		bool var$10 = $nc(sourceAttrs)->isDirectory();
		var$9 = !(var$10 || $nc(sourceAttrs)->isDirectoryLink());
	}
	if (var$9) {
		$throwNew($AssertionError);
	}
	try {
		if ($nc(sourceAttrs)->isDirectory()) {
			ensureEmptyDir(source);
			$WindowsNativeDispatcher::CreateDirectory(targetPath, 0);
		} else {
			$var($String, linkTarget, $WindowsLinkSupport::readLink(source));
			$WindowsNativeDispatcher::CreateSymbolicLink(targetPath, $($WindowsPath::addPrefixIfNeeded(linkTarget)), 1);
		}
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(target);
	}
	$var($WindowsFileAttributeViews$Dos, view, $WindowsFileAttributeViews::createDosView(target, false));
	try {
		$nc(view)->setAttributes(sourceAttrs);
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		try {
			$WindowsNativeDispatcher::RemoveDirectory(targetPath);
		} catch ($WindowsException&) {
			$catch();
		}
		$throw(x);
	}
	try {
		copySecurityAttributes(source, target, false);
	} catch ($IOException&) {
		$catch();
	}
	try {
		$WindowsNativeDispatcher::RemoveDirectory(sourcePath);
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		try {
			$WindowsNativeDispatcher::RemoveDirectory(targetPath);
		} catch ($WindowsException&) {
			$catch();
		}
		bool var$11 = x->lastError() == 145;
		if (var$11 || x->lastError() == 183) {
			$throwNew($DirectoryNotEmptyException, $($nc(target)->getPathForExceptionMessage()));
		}
		x->rethrowAsIOException(source);
	}
}

$String* WindowsFileCopy::asWin32Path($WindowsPath* path) {
	$init(WindowsFileCopy);
	try {
		return $nc(path)->getPathForWin32Calls();
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(path);
		return nullptr;
	}
	$shouldNotReachHere();
}

void WindowsFileCopy::copySecurityAttributes($WindowsPath* source, $WindowsPath* target, bool followLinks) {
	$init(WindowsFileCopy);
	$var($String, path, $WindowsLinkSupport::getFinalPath(source, followLinks));
	$var($WindowsSecurity$Privilege, priv, $WindowsSecurity::enablePrivilege("SeRestorePrivilege"_s));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t request = ((4 | 1) | 2);
			$var($NativeBuffer, buffer, $WindowsAclFileAttributeView::getFileSecurity(path, request));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$var($String, var$2, $nc(target)->getPathForWin32Calls());
						int32_t var$3 = request;
						$WindowsNativeDispatcher::SetFileSecurity(var$2, var$3, $nc(buffer)->address());
					} catch ($WindowsException&) {
						$var($WindowsException, x, $catch());
						x->rethrowAsIOException(target);
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					$nc(buffer)->release();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(priv)->drop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool WindowsFileCopy::lambda$ensureEmptyDir$0($Path* e) {
	$init(WindowsFileCopy);
	return true;
}

void clinit$WindowsFileCopy($Class* class$) {
	WindowsFileCopy::$assertionsDisabled = !WindowsFileCopy::class$->desiredAssertionStatus();
}

WindowsFileCopy::WindowsFileCopy() {
}

$Class* WindowsFileCopy::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0::classInfo$.name)) {
			return WindowsFileCopy$$Lambda$lambda$ensureEmptyDir$0::load$(name, initialize);
		}
	}
	$loadClass(WindowsFileCopy, name, initialize, &_WindowsFileCopy_ClassInfo_, clinit$WindowsFileCopy, allocate$WindowsFileCopy);
	return class$;
}

$Class* WindowsFileCopy::class$ = nullptr;

		} // fs
	} // nio
} // sun