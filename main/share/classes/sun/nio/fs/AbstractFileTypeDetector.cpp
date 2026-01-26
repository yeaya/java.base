#include <sun/nio/fs/AbstractFileTypeDetector.h>

#include <java/net/FileNameMap.h>
#include <java/net/URLConnection.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/spi/FileTypeDetector.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ENGLISH
#undef TSPECIALS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $FileNameMap = ::java::net::FileNameMap;
using $URLConnection = ::java::net::URLConnection;
using $Path = ::java::nio::file::Path;
using $FileTypeDetector = ::java::nio::file::spi::FileTypeDetector;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _AbstractFileTypeDetector_FieldInfo_[] = {
	{"TSPECIALS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractFileTypeDetector, TSPECIALS)},
	{}
};

$MethodInfo _AbstractFileTypeDetector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractFileTypeDetector, init$, void)},
	{"getExtension", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $method(AbstractFileTypeDetector, getExtension, $String*, $String*)},
	{"implProbeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AbstractFileTypeDetector, implProbeContentType, $String*, $Path*), "java.io.IOException"},
	{"isTokenChar", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractFileTypeDetector, isTokenChar, bool, char16_t)},
	{"isValidToken", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractFileTypeDetector, isValidToken, bool, $String*)},
	{"parse", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractFileTypeDetector, parse, $String*, $String*)},
	{"probeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractFileTypeDetector, probeContentType, $String*, $Path*), "java.io.IOException"},
	{}
};

$ClassInfo _AbstractFileTypeDetector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.nio.fs.AbstractFileTypeDetector",
	"java.nio.file.spi.FileTypeDetector",
	nullptr,
	_AbstractFileTypeDetector_FieldInfo_,
	_AbstractFileTypeDetector_MethodInfo_
};

$Object* allocate$AbstractFileTypeDetector($Class* clazz) {
	return $of($alloc(AbstractFileTypeDetector));
}

$String* AbstractFileTypeDetector::TSPECIALS = nullptr;

void AbstractFileTypeDetector::init$() {
	$FileTypeDetector::init$();
}

$String* AbstractFileTypeDetector::getExtension($String* name) {
	$var($String, ext, ""_s);
	if (name != nullptr && !name->isEmpty()) {
		int32_t dot = name->indexOf((int32_t)u'.');
		if ((dot >= 0) && (dot < name->length() - 1)) {
			$assign(ext, name->substring(dot + 1));
		}
	}
	return ext;
}

$String* AbstractFileTypeDetector::probeContentType($Path* file) {
	$useLocalCurrentObjectStackCache();
	if (file == nullptr) {
		$throwNew($NullPointerException, "\'file\' is null"_s);
	}
	$var($String, result, implProbeContentType(file));
	if (result == nullptr) {
		$var($Path, fileName, $nc(file)->getFileName());
		if (fileName != nullptr) {
			$var($FileNameMap, fileNameMap, $URLConnection::getFileNameMap());
			$assign(result, $nc(fileNameMap)->getContentTypeFor($(fileName->toString())));
		}
	}
	return (result == nullptr) ? ($String*)nullptr : parse(result);
}

$String* AbstractFileTypeDetector::parse($String* s) {
	$init(AbstractFileTypeDetector);
	$useLocalCurrentObjectStackCache();
	int32_t slash = $nc(s)->indexOf((int32_t)u'/');
	int32_t semicolon = s->indexOf((int32_t)u';');
	if (slash < 0) {
		return nullptr;
	}
	$init($Locale);
	$var($String, type, $($(s->substring(0, slash))->trim())->toLowerCase($Locale::ENGLISH));
	if (!isValidToken(type)) {
		return nullptr;
	}
	$var($String, subtype, (semicolon < 0) ? s->substring(slash + 1) : s->substring(slash + 1, semicolon));
	$assign(subtype, $($nc(subtype)->trim())->toLowerCase($Locale::ENGLISH));
	if (!isValidToken(subtype)) {
		return nullptr;
	}
	int32_t var$0 = type->length();
	$var($StringBuilder, sb, $new($StringBuilder, var$0 + subtype->length() + 1));
	sb->append(type);
	sb->append(u'/');
	sb->append(subtype);
	return sb->toString();
}

bool AbstractFileTypeDetector::isTokenChar(char16_t c) {
	$init(AbstractFileTypeDetector);
	return (c > 32) && (c < 127) && ($nc(AbstractFileTypeDetector::TSPECIALS)->indexOf((int32_t)c) < 0);
}

bool AbstractFileTypeDetector::isValidToken($String* s) {
	$init(AbstractFileTypeDetector);
	int32_t len = $nc(s)->length();
	if (len == 0) {
		return false;
	}
	for (int32_t i = 0; i < len; ++i) {
		if (!isTokenChar(s->charAt(i))) {
			return false;
		}
	}
	return true;
}

AbstractFileTypeDetector::AbstractFileTypeDetector() {
}

void clinit$AbstractFileTypeDetector($Class* class$) {
	$assignStatic(AbstractFileTypeDetector::TSPECIALS, "()<>@,;:/[]?=\\\""_s);
}

$Class* AbstractFileTypeDetector::load$($String* name, bool initialize) {
	$loadClass(AbstractFileTypeDetector, name, initialize, &_AbstractFileTypeDetector_ClassInfo_, clinit$AbstractFileTypeDetector, allocate$AbstractFileTypeDetector);
	return class$;
}

$Class* AbstractFileTypeDetector::class$ = nullptr;

		} // fs
	} // nio
} // sun