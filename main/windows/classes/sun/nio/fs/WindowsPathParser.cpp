#include <sun/nio/fs/WindowsPathParser.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/InvalidPathException.h>
#include <sun/nio/fs/WindowsPathParser$Result.h>
#include <sun/nio/fs/WindowsPathType.h>
#include <jcpp.h>

#undef ABSOLUTE
#undef DIRECTORY_RELATIVE
#undef DRIVE_RELATIVE
#undef RELATIVE
#undef UNC

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $WindowsPathParser$Result = ::sun::nio::fs::WindowsPathParser$Result;
using $WindowsPathType = ::sun::nio::fs::WindowsPathType;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsPathParser_FieldInfo_[] = {
	{"reservedChars", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsPathParser, reservedChars)},
	{}
};

$MethodInfo _WindowsPathParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsPathParser::*)()>(&WindowsPathParser::init$))},
	{"isInvalidPathChar", "(C)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(char16_t)>(&WindowsPathParser::isInvalidPathChar))},
	{"isLetter", "(C)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(char16_t)>(&WindowsPathParser::isLetter))},
	{"isSlash", "(C)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(char16_t)>(&WindowsPathParser::isSlash))},
	{"nextNonSlash", "(Ljava/lang/String;II)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)($String*,int32_t,int32_t)>(&WindowsPathParser::nextNonSlash))},
	{"nextSlash", "(Ljava/lang/String;II)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)($String*,int32_t,int32_t)>(&WindowsPathParser::nextSlash))},
	{"normalize", "(Ljava/lang/StringBuilder;Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($StringBuilder*,$String*,int32_t)>(&WindowsPathParser::normalize))},
	{"parse", "(Ljava/lang/String;)Lsun/nio/fs/WindowsPathParser$Result;", nullptr, $STATIC, $method(static_cast<$WindowsPathParser$Result*(*)($String*)>(&WindowsPathParser::parse))},
	{"parse", "(Ljava/lang/String;Z)Lsun/nio/fs/WindowsPathParser$Result;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$WindowsPathParser$Result*(*)($String*,bool)>(&WindowsPathParser::parse))},
	{"parseNormalizedPath", "(Ljava/lang/String;)Lsun/nio/fs/WindowsPathParser$Result;", nullptr, $STATIC, $method(static_cast<$WindowsPathParser$Result*(*)($String*)>(&WindowsPathParser::parseNormalizedPath))},
	{}
};

$InnerClassInfo _WindowsPathParser_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsPathParser$Result", "sun.nio.fs.WindowsPathParser", "Result", $STATIC},
	{}
};

$ClassInfo _WindowsPathParser_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsPathParser",
	"java.lang.Object",
	nullptr,
	_WindowsPathParser_FieldInfo_,
	_WindowsPathParser_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsPathParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsPathParser$Result"
};

$Object* allocate$WindowsPathParser($Class* clazz) {
	return $of($alloc(WindowsPathParser));
}

$String* WindowsPathParser::reservedChars = nullptr;

void WindowsPathParser::init$() {
}

$WindowsPathParser$Result* WindowsPathParser::parse($String* input) {
	$init(WindowsPathParser);
	return parse(input, true);
}

$WindowsPathParser$Result* WindowsPathParser::parseNormalizedPath($String* input) {
	$init(WindowsPathParser);
	return parse(input, false);
}

$WindowsPathParser$Result* WindowsPathParser::parse($String* input, bool requireToNormalize) {
	$init(WindowsPathParser);
	$useLocalCurrentObjectStackCache();
	$var($String, root, ""_s);
	$WindowsPathType* type = nullptr;
	int32_t len = $nc(input)->length();
	int32_t off = 0;
	if (len > 1) {
		char16_t c0 = input->charAt(0);
		char16_t c1 = input->charAt(1);
		char16_t c = (char16_t)0;
		int32_t next = 2;
		bool var$0 = isSlash(c0);
		if (var$0 && isSlash(c1)) {
			$init($WindowsPathType);
			type = $WindowsPathType::UNC;
			off = nextNonSlash(input, next, len);
			next = nextSlash(input, off, len);
			if (off == next) {
				$throwNew($InvalidPathException, input, "UNC path is missing hostname"_s);
			}
			$var($String, host, input->substring(off, next));
			off = nextNonSlash(input, next, len);
			next = nextSlash(input, off, len);
			if (off == next) {
				$throwNew($InvalidPathException, input, "UNC path is missing sharename"_s);
			}
			$assign(root, $str({"\\\\"_s, host, "\\"_s, $(input->substring(off, next)), "\\"_s}));
			off = next;
		} else if (isLetter(c0) && c1 == u':') {
			char16_t c2 = 0;
			if (len > 2 && isSlash(c2 = input->charAt(2))) {
				if (c2 == u'\\') {
					$assign(root, input->substring(0, 3));
				} else {
					$assign(root, $str({$(input->substring(0, 2)), $$str(u'\\')}));
				}
				off = 3;
				$init($WindowsPathType);
				type = $WindowsPathType::ABSOLUTE;
			} else {
				$assign(root, input->substring(0, 2));
				off = 2;
				$init($WindowsPathType);
				type = $WindowsPathType::DRIVE_RELATIVE;
			}
		}
	}
	if (off == 0) {
		if (len > 0 && isSlash(input->charAt(0))) {
			$init($WindowsPathType);
			type = $WindowsPathType::DIRECTORY_RELATIVE;
			$assign(root, "\\"_s);
		} else {
			$init($WindowsPathType);
			type = $WindowsPathType::RELATIVE;
		}
	}
	if (requireToNormalize) {
		$var($StringBuilder, sb, $new($StringBuilder, input->length()));
		sb->append(root);
		return $new($WindowsPathParser$Result, type, root, $(normalize(sb, input, off)));
	} else {
		return $new($WindowsPathParser$Result, type, root, input);
	}
}

$String* WindowsPathParser::normalize($StringBuilder* sb, $String* path, int32_t off) {
	$init(WindowsPathParser);
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(path)->length();
	off = nextNonSlash(path, off, len);
	int32_t start = off;
	char16_t lastC = (char16_t)0;
	while (off < len) {
		char16_t c = path->charAt(off);
		if (isSlash(c)) {
			if (lastC == u' ') {
				$throwNew($InvalidPathException, path, $$str({"Trailing char <"_s, $$str(lastC), ">"_s}), off - 1);
			}
			$nc(sb)->append(static_cast<$CharSequence*>(path), start, off);
			off = nextNonSlash(path, off, len);
			if (off != len) {
				sb->append(u'\\');
			}
			start = off;
		} else {
			if (isInvalidPathChar(c)) {
				$throwNew($InvalidPathException, path, $$str({"Illegal char <"_s, $$str(c), ">"_s}), off);
			}
			lastC = c;
			++off;
		}
	}
	if (start != off) {
		if (lastC == u' ') {
			$throwNew($InvalidPathException, path, $$str({"Trailing char <"_s, $$str(lastC), ">"_s}), off - 1);
		}
		$nc(sb)->append(static_cast<$CharSequence*>(path), start, off);
	}
	return $nc(sb)->toString();
}

bool WindowsPathParser::isSlash(char16_t c) {
	$init(WindowsPathParser);
	return (c == u'\\') || (c == u'/');
}

int32_t WindowsPathParser::nextNonSlash($String* path, int32_t off, int32_t end) {
	$init(WindowsPathParser);
	while (off < end && isSlash($nc(path)->charAt(off))) {
		++off;
	}
	return off;
}

int32_t WindowsPathParser::nextSlash($String* path, int32_t off, int32_t end) {
	$init(WindowsPathParser);
	$useLocalCurrentObjectStackCache();
	char16_t c = 0;
	while (off < end && !isSlash(c = $nc(path)->charAt(off))) {
		if (isInvalidPathChar(c)) {
			$throwNew($InvalidPathException, path, $$str({"Illegal character ["_s, $$str(c), "] in path"_s}), off);
		}
		++off;
	}
	return off;
}

bool WindowsPathParser::isLetter(char16_t c) {
	$init(WindowsPathParser);
	return ((c >= u'a') && (c <= u'z')) || ((c >= u'A') && (c <= u'Z'));
}

bool WindowsPathParser::isInvalidPathChar(char16_t ch) {
	$init(WindowsPathParser);
	return ch < u' ' || $nc(WindowsPathParser::reservedChars)->indexOf((int32_t)ch) != -1;
}

WindowsPathParser::WindowsPathParser() {
}

void clinit$WindowsPathParser($Class* class$) {
	$assignStatic(WindowsPathParser::reservedChars, "<>:\"|?*"_s);
}

$Class* WindowsPathParser::load$($String* name, bool initialize) {
	$loadClass(WindowsPathParser, name, initialize, &_WindowsPathParser_ClassInfo_, clinit$WindowsPathParser, allocate$WindowsPathParser);
	return class$;
}

$Class* WindowsPathParser::class$ = nullptr;

		} // fs
	} // nio
} // sun