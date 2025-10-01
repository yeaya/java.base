#include <sun/nio/fs/WindowsUserDefinedFileAttributeView.h>

#include <java/io/IOException.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/fs/AbstractUserDefinedFileAttributeView.h>
#include <sun/nio/fs/WindowsChannelFactory.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsLinkSupport.h>
#include <sun/nio/fs/WindowsNativeDispatcher$FirstStream.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

#undef READ
#undef TRUNCATE_EXISTING
#undef OPEN_REPARSE_POINT
#undef CREATE
#undef MAX_VALUE
#undef WRITE

using $IOException = ::java::io::IOException;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $OpenOption = ::java::nio::file::OpenOption;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AbstractUserDefinedFileAttributeView = ::sun::nio::fs::AbstractUserDefinedFileAttributeView;
using $WindowsChannelFactory = ::sun::nio::fs::WindowsChannelFactory;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsLinkSupport = ::sun::nio::fs::WindowsLinkSupport;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsNativeDispatcher$FirstStream = ::sun::nio::fs::WindowsNativeDispatcher$FirstStream;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsUserDefinedFileAttributeView_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsUserDefinedFileAttributeView, unsafe)},
	{"file", "Lsun/nio/fs/WindowsPath;", nullptr, $PRIVATE | $FINAL, $field(WindowsUserDefinedFileAttributeView, file)},
	{"followLinks", "Z", nullptr, $PRIVATE | $FINAL, $field(WindowsUserDefinedFileAttributeView, followLinks)},
	{}
};

$MethodInfo _WindowsUserDefinedFileAttributeView_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/WindowsPath;Z)V", nullptr, 0, $method(static_cast<void(WindowsUserDefinedFileAttributeView::*)($WindowsPath*,bool)>(&WindowsUserDefinedFileAttributeView::init$))},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"join", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WindowsUserDefinedFileAttributeView::*)($String*,$String*)>(&WindowsUserDefinedFileAttributeView::join))},
	{"join", "(Lsun/nio/fs/WindowsPath;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WindowsUserDefinedFileAttributeView::*)($WindowsPath*,$String*)>(&WindowsUserDefinedFileAttributeView::join)), "sun.nio.fs.WindowsException"},
	{"list", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"listUsingStreamEnumeration", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$List*(WindowsUserDefinedFileAttributeView::*)()>(&WindowsUserDefinedFileAttributeView::listUsingStreamEnumeration)), "java.io.IOException"},
	{"read", "(Ljava/lang/String;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"size", "(Ljava/lang/String;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _WindowsUserDefinedFileAttributeView_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsUserDefinedFileAttributeView",
	"sun.nio.fs.AbstractUserDefinedFileAttributeView",
	nullptr,
	_WindowsUserDefinedFileAttributeView_FieldInfo_,
	_WindowsUserDefinedFileAttributeView_MethodInfo_
};

$Object* allocate$WindowsUserDefinedFileAttributeView($Class* clazz) {
	return $of($alloc(WindowsUserDefinedFileAttributeView));
}

$Unsafe* WindowsUserDefinedFileAttributeView::unsafe = nullptr;

$String* WindowsUserDefinedFileAttributeView::join($String* file, $String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "\'name\' is null"_s);
	}
	return $str({file, ":"_s, name});
}

$String* WindowsUserDefinedFileAttributeView::join($WindowsPath* file, $String* name) {
	return join($($nc(file)->getPathForWin32Calls()), name);
}

void WindowsUserDefinedFileAttributeView::init$($WindowsPath* file, bool followLinks) {
	$AbstractUserDefinedFileAttributeView::init$();
	$set(this, file, file);
	this->followLinks = followLinks;
}

$List* WindowsUserDefinedFileAttributeView::listUsingStreamEnumeration() {
	$var($List, list, $new($ArrayList));
	try {
		$var($WindowsNativeDispatcher$FirstStream, first, $WindowsNativeDispatcher::FindFirstStream($($nc(this->file)->getPathForWin32Calls())));
		if (first != nullptr) {
			int64_t handle = first->handle();
			{
				$var($Throwable, var$0, nullptr);
				try {
					$var($String, name, first->name());
					if (!$nc(name)->equals("::$DATA"_s)) {
						$var($StringArray, segs, name->split(":"_s));
						list->add(segs->get(1));
					}
					while (($assign(name, $WindowsNativeDispatcher::FindNextStream(handle))) != nullptr) {
						$var($StringArray, segs, $nc(name)->split(":"_s));
						list->add(segs->get(1));
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					$WindowsNativeDispatcher::FindClose(handle);
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(this->file);
	}
	return $Collections::unmodifiableList(list);
}

$List* WindowsUserDefinedFileAttributeView::list() {
	if ($System::getSecurityManager() != nullptr) {
		checkAccess($($nc(this->file)->getPathForPermissionCheck()), true, false);
	}
	return listUsingStreamEnumeration();
}

int32_t WindowsUserDefinedFileAttributeView::size($String* name) {
	if ($System::getSecurityManager() != nullptr) {
		checkAccess($($nc(this->file)->getPathForPermissionCheck()), true, false);
	}
	$var($FileChannel, fc, nullptr);
	try {
		$var($Set, opts, $new($HashSet));
		$init($StandardOpenOption);
		opts->add($StandardOpenOption::READ);
		if (!this->followLinks) {
			$init($WindowsChannelFactory);
			opts->add($WindowsChannelFactory::OPEN_REPARSE_POINT);
		}
		$assign(fc, $WindowsChannelFactory::newFileChannel($(join(this->file, name)), nullptr, opts, 0));
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException($(join($($nc(this->file)->getPathForPermissionCheck()), name)));
	}
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			int64_t size = $nc(fc)->size();
			if (size > $Integer::MAX_VALUE) {
				$throwNew($ArithmeticException, "Stream too large"_s);
			}
			var$2 = (int32_t)size;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(fc)->close();
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

int32_t WindowsUserDefinedFileAttributeView::read($String* name, $ByteBuffer* dst) {
	if ($System::getSecurityManager() != nullptr) {
		checkAccess($($nc(this->file)->getPathForPermissionCheck()), true, false);
	}
	$var($FileChannel, fc, nullptr);
	try {
		$var($Set, opts, $new($HashSet));
		$init($StandardOpenOption);
		opts->add($StandardOpenOption::READ);
		if (!this->followLinks) {
			$init($WindowsChannelFactory);
			opts->add($WindowsChannelFactory::OPEN_REPARSE_POINT);
		}
		$assign(fc, $WindowsChannelFactory::newFileChannel($(join(this->file, name)), nullptr, opts, 0));
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException($(join($($nc(this->file)->getPathForPermissionCheck()), name)));
	}
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			int64_t var$3 = $nc(fc)->size();
			if (var$3 > $nc(dst)->remaining()) {
				$throwNew($IOException, "Stream too large"_s);
			}
			int32_t total = 0;
			while ($nc(dst)->hasRemaining()) {
				int32_t n = $nc(fc)->read(dst);
				if (n < 0) {
					break;
				}
				total += n;
			}
			var$2 = total;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(fc)->close();
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

int32_t WindowsUserDefinedFileAttributeView::write($String* name, $ByteBuffer* src) {
	if ($System::getSecurityManager() != nullptr) {
		checkAccess($($nc(this->file)->getPathForPermissionCheck()), false, true);
	}
	int64_t handle = -1;
	try {
		int32_t flags = 0x02000000;
		if (!this->followLinks) {
			flags |= 0x00200000;
		}
		handle = $WindowsNativeDispatcher::CreateFile($($nc(this->file)->getPathForWin32Calls()), (int32_t)0x80000000, ((1 | 2) | 4), 3, flags);
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(this->file);
	}
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$var($Set, opts, $new($HashSet));
			if (!this->followLinks) {
				$init($WindowsChannelFactory);
				opts->add($WindowsChannelFactory::OPEN_REPARSE_POINT);
			}
			$init($StandardOpenOption);
			opts->add($StandardOpenOption::CREATE);
			opts->add($StandardOpenOption::WRITE);
			opts->add($StandardOpenOption::TRUNCATE_EXISTING);
			$var($FileChannel, named, nullptr);
			try {
				$assign(named, $WindowsChannelFactory::newFileChannel($(join(this->file, name)), nullptr, opts, 0));
			} catch ($WindowsException&) {
				$var($WindowsException, x, $catch());
				x->rethrowAsIOException($(join($($nc(this->file)->getPathForPermissionCheck()), name)));
			}
			{
				$var($Throwable, var$3, nullptr);
				int32_t var$5 = 0;
				bool return$4 = false;
				try {
					int32_t rem = $nc(src)->remaining();
					while (src->hasRemaining()) {
						$nc(named)->write(src);
					}
					var$5 = rem;
					return$4 = true;
					goto $finally1;
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} $finally1: {
					$nc(named)->close();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					var$2 = var$5;
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$WindowsNativeDispatcher::CloseHandle(handle);
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

void WindowsUserDefinedFileAttributeView::delete$($String* name) {
	if ($System::getSecurityManager() != nullptr) {
		checkAccess($($nc(this->file)->getPathForPermissionCheck()), false, true);
	}
	$var($String, path, $WindowsLinkSupport::getFinalPath(this->file, this->followLinks));
	$var($String, toDelete, join(path, name));
	try {
		$WindowsNativeDispatcher::DeleteFile(toDelete);
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		x->rethrowAsIOException(toDelete);
	}
}

void clinit$WindowsUserDefinedFileAttributeView($Class* class$) {
	$assignStatic(WindowsUserDefinedFileAttributeView::unsafe, $Unsafe::getUnsafe());
}

WindowsUserDefinedFileAttributeView::WindowsUserDefinedFileAttributeView() {
}

$Class* WindowsUserDefinedFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(WindowsUserDefinedFileAttributeView, name, initialize, &_WindowsUserDefinedFileAttributeView_ClassInfo_, clinit$WindowsUserDefinedFileAttributeView, allocate$WindowsUserDefinedFileAttributeView);
	return class$;
}

$Class* WindowsUserDefinedFileAttributeView::class$ = nullptr;

		} // fs
	} // nio
} // sun