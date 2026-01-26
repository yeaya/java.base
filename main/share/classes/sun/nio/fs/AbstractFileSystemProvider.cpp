#include <sun/nio/fs/AbstractFileSystemProvider.h>

#include <java/io/IOException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/AccessMode.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Map.h>
#include <sun/nio/fs/DynamicFileAttributeView.h>
#include <jcpp.h>

using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Map = ::java::util::Map;
using $DynamicFileAttributeView = ::sun::nio::fs::DynamicFileAttributeView;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _AbstractFileSystemProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractFileSystemProvider, init$, void)},
	{"delete", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractFileSystemProvider, delete$, void, $Path*), "java.io.IOException"},
	{"deleteIfExists", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractFileSystemProvider, deleteIfExists, bool, $Path*), "java.io.IOException"},
	{"exists", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractFileSystemProvider, exists, bool, $Path*)},
	{"getFileAttributeView", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Lsun/nio/fs/DynamicFileAttributeView;", nullptr, $TRANSIENT | $ABSTRACT, $virtualMethod(AbstractFileSystemProvider, getFileAttributeView, $DynamicFileAttributeView*, $Path*, $String*, $LinkOptionArray*)},
	{"getSunPathForSocketFile", "(Ljava/nio/file/Path;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractFileSystemProvider, getSunPathForSocketFile, $bytes*, $Path*)},
	{"implDelete", "(Ljava/nio/file/Path;Z)Z", nullptr, $ABSTRACT, $virtualMethod(AbstractFileSystemProvider, implDelete, bool, $Path*, bool), "java.io.IOException"},
	{"isDirectory", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractFileSystemProvider, isDirectory, bool, $Path*)},
	{"isRegularFile", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractFileSystemProvider, isRegularFile, bool, $Path*)},
	{"readAttributes", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(AbstractFileSystemProvider, readAttributes, $Map*, $Path*, $String*, $LinkOptionArray*), "java.io.IOException"},
	{"setAttribute", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(AbstractFileSystemProvider, setAttribute, void, $Path*, $String*, Object$*, $LinkOptionArray*), "java.io.IOException"},
	{"split", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractFileSystemProvider, split, $StringArray*, $String*)},
	{}
};

$ClassInfo _AbstractFileSystemProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.nio.fs.AbstractFileSystemProvider",
	"java.nio.file.spi.FileSystemProvider",
	nullptr,
	nullptr,
	_AbstractFileSystemProvider_MethodInfo_
};

$Object* allocate$AbstractFileSystemProvider($Class* clazz) {
	return $of($alloc(AbstractFileSystemProvider));
}

void AbstractFileSystemProvider::init$() {
	$FileSystemProvider::init$();
}

$StringArray* AbstractFileSystemProvider::split($String* attribute) {
	$init(AbstractFileSystemProvider);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, s, $new($StringArray, 2));
	int32_t pos = $nc(attribute)->indexOf((int32_t)u':');
	if (pos == -1) {
		s->set(0, "basic"_s);
		s->set(1, attribute);
	} else {
		s->set(0, $(attribute->substring(0, pos++)));
		s->set(1, (pos == attribute->length()) ? ""_s : $(attribute->substring(pos)));
	}
	return s;
}

void AbstractFileSystemProvider::setAttribute($Path* file, $String* attribute, Object$* value, $LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, s, split(attribute));
	if ($nc($nc(s)->get(0))->isEmpty()) {
		$throwNew($IllegalArgumentException, attribute);
	}
	$var($DynamicFileAttributeView, view, getFileAttributeView(file, $nc(s)->get(0), options));
	if (view == nullptr) {
		$throwNew($UnsupportedOperationException, $$str({"View \'"_s, $nc(s)->get(0), "\' not available"_s}));
	}
	$nc(view)->setAttribute($nc(s)->get(1), value);
}

$Map* AbstractFileSystemProvider::readAttributes($Path* file, $String* attributes, $LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, s, split(attributes));
	if ($nc($nc(s)->get(0))->isEmpty()) {
		$throwNew($IllegalArgumentException, attributes);
	}
	$var($DynamicFileAttributeView, view, getFileAttributeView(file, $nc(s)->get(0), options));
	if (view == nullptr) {
		$throwNew($UnsupportedOperationException, $$str({"View \'"_s, $nc(s)->get(0), "\' not available"_s}));
	}
	return $nc(view)->readAttributes($($nc($nc(s)->get(1))->split(","_s)));
}

void AbstractFileSystemProvider::delete$($Path* file) {
	implDelete(file, true);
}

bool AbstractFileSystemProvider::deleteIfExists($Path* file) {
	return implDelete(file, false);
}

bool AbstractFileSystemProvider::isDirectory($Path* file) {
	$useLocalCurrentObjectStackCache();
	try {
		$load($BasicFileAttributes);
		return $nc($(readAttributes(file, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0))))->isDirectory();
	} catch ($IOException& ioe) {
		return false;
	}
	$shouldNotReachHere();
}

bool AbstractFileSystemProvider::isRegularFile($Path* file) {
	$useLocalCurrentObjectStackCache();
	try {
		$load($BasicFileAttributes);
		return $nc($(readAttributes(file, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0))))->isRegularFile();
	} catch ($IOException& ioe) {
		return false;
	}
	$shouldNotReachHere();
}

bool AbstractFileSystemProvider::exists($Path* file) {
	try {
		checkAccess(file, $$new($AccessModeArray, 0));
		return true;
	} catch ($IOException& ioe) {
		return false;
	}
	$shouldNotReachHere();
}

AbstractFileSystemProvider::AbstractFileSystemProvider() {
}

$Class* AbstractFileSystemProvider::load$($String* name, bool initialize) {
	$loadClass(AbstractFileSystemProvider, name, initialize, &_AbstractFileSystemProvider_ClassInfo_, allocate$AbstractFileSystemProvider);
	return class$;
}

$Class* AbstractFileSystemProvider::class$ = nullptr;

		} // fs
	} // nio
} // sun