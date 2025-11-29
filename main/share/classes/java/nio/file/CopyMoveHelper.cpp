#include <java/nio/file/CopyMoveHelper.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/nio/file/AtomicMoveNotSupportedException.h>
#include <java/nio/file/CopyMoveHelper$CopyOptions.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/FileAlreadyExistsException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/attribute/FileTime.h>
#include <jcpp.h>

#undef ATOMIC_MOVE
#undef COPY_ATTRIBUTES
#undef NOFOLLOW_LINKS

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicMoveNotSupportedException = ::java::nio::file::AtomicMoveNotSupportedException;
using $CopyMoveHelper$CopyOptions = ::java::nio::file::CopyMoveHelper$CopyOptions;
using $CopyOption = ::java::nio::file::CopyOption;
using $FileAlreadyExistsException = ::java::nio::file::FileAlreadyExistsException;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _CopyMoveHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CopyMoveHelper::*)()>(&CopyMoveHelper::init$))},
	{"convertMoveToCopyOptions", "([Ljava/nio/file/CopyOption;)[Ljava/nio/file/CopyOption;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$CopyOptionArray*(*)($CopyOptionArray*)>(&CopyMoveHelper::convertMoveToCopyOptions)), "java.nio.file.AtomicMoveNotSupportedException"},
	{"copyToForeignTarget", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V", nullptr, $STATIC | $TRANSIENT, $method(static_cast<void(*)($Path*,$Path*,$CopyOptionArray*)>(&CopyMoveHelper::copyToForeignTarget)), "java.io.IOException"},
	{"moveToForeignTarget", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V", nullptr, $STATIC | $TRANSIENT, $method(static_cast<void(*)($Path*,$Path*,$CopyOptionArray*)>(&CopyMoveHelper::moveToForeignTarget)), "java.io.IOException"},
	{}
};

$InnerClassInfo _CopyMoveHelper_InnerClassesInfo_[] = {
	{"java.nio.file.CopyMoveHelper$CopyOptions", "java.nio.file.CopyMoveHelper", "CopyOptions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CopyMoveHelper_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.CopyMoveHelper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CopyMoveHelper_MethodInfo_,
	nullptr,
	nullptr,
	_CopyMoveHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.file.CopyMoveHelper$CopyOptions"
};

$Object* allocate$CopyMoveHelper($Class* clazz) {
	return $of($alloc(CopyMoveHelper));
}

void CopyMoveHelper::init$() {
}

$CopyOptionArray* CopyMoveHelper::convertMoveToCopyOptions($CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(options)->length;
	$var($CopyOptionArray, newOptions, $new($CopyOptionArray, len + 2));
	for (int32_t i = 0; i < len; ++i) {
		$var($CopyOption, option, options->get(i));
		$init($StandardCopyOption);
		if ($equals(option, $StandardCopyOption::ATOMIC_MOVE)) {
			$throwNew($AtomicMoveNotSupportedException, nullptr, nullptr, "Atomic move between providers is not supported"_s);
		}
		newOptions->set(i, option);
	}
	$init($LinkOption);
	newOptions->set(len, $LinkOption::NOFOLLOW_LINKS);
	$init($StandardCopyOption);
	newOptions->set(len + 1, $StandardCopyOption::COPY_ATTRIBUTES);
	return newOptions;
}

void CopyMoveHelper::copyToForeignTarget($Path* source, $Path* target, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($CopyMoveHelper$CopyOptions, opts, $CopyMoveHelper$CopyOptions::parse(options));
	$init($LinkOption);
	$var($LinkOptionArray, linkOptions, ($nc(opts)->followLinks) ? $new($LinkOptionArray, 0) : $new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}));
	$load($BasicFileAttributes);
	$var($BasicFileAttributes, attrs, $Files::readAttributes(source, $BasicFileAttributes::class$, linkOptions));
	if ($nc(attrs)->isSymbolicLink()) {
		$throwNew($IOException, "Copying of symbolic links not supported"_s);
	}
	if ($nc(opts)->replaceExisting) {
		$Files::deleteIfExists(target);
	} else if ($Files::exists(target, $$new($LinkOptionArray, 0))) {
		$throwNew($FileAlreadyExistsException, $($nc(target)->toString()));
	}
	if ($nc(attrs)->isDirectory()) {
		$Files::createDirectory(target, $$new($FileAttributeArray, 0));
	} else {
		{
			$var($InputStream, in, $Files::newInputStream(source, $$new($OpenOptionArray, 0)));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$Files::copy(in, target, $$new($CopyOptionArray, 0));
					} catch ($Throwable& t$) {
						if (in != nullptr) {
							try {
								in->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (in != nullptr) {
						in->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
	if ($nc(opts)->copyAttributes) {
		$load($BasicFileAttributeView);
		$var($BasicFileAttributeView, view, $cast($BasicFileAttributeView, $Files::getFileAttributeView(target, $BasicFileAttributeView::class$, $$new($LinkOptionArray, 0))));
		try {
			$var($FileTime, var$2, $nc(attrs)->lastModifiedTime());
			$var($FileTime, var$3, attrs->lastAccessTime());
			$nc(view)->setTimes(var$2, var$3, $(attrs->creationTime()));
		} catch ($Throwable& x) {
			try {
				$Files::delete$(target);
			} catch ($Throwable& suppressed) {
				x->addSuppressed(suppressed);
			}
			$throw(x);
		}
	}
}

void CopyMoveHelper::moveToForeignTarget($Path* source, $Path* target, $CopyOptionArray* options) {
	copyToForeignTarget(source, target, $(convertMoveToCopyOptions(options)));
	$Files::delete$(source);
}

CopyMoveHelper::CopyMoveHelper() {
}

$Class* CopyMoveHelper::load$($String* name, bool initialize) {
	$loadClass(CopyMoveHelper, name, initialize, &_CopyMoveHelper_ClassInfo_, allocate$CopyMoveHelper);
	return class$;
}

$Class* CopyMoveHelper::class$ = nullptr;

		} // file
	} // nio
} // java