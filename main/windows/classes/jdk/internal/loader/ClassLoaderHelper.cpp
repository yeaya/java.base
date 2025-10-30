#include <jdk/internal/loader/ClassLoaderHelper.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace loader {

$MethodInfo _ClassLoaderHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassLoaderHelper::*)()>(&ClassLoaderHelper::init$))},
	{"mapAlternativeName", "(Ljava/io/File;)Ljava/io/File;", nullptr, $STATIC, $method(static_cast<$File*(*)($File*)>(&ClassLoaderHelper::mapAlternativeName))},
	{"parsePath", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)($String*)>(&ClassLoaderHelper::parsePath))},
	{}
};

$ClassInfo _ClassLoaderHelper_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.ClassLoaderHelper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClassLoaderHelper_MethodInfo_
};

$Object* allocate$ClassLoaderHelper($Class* clazz) {
	return $of($alloc(ClassLoaderHelper));
}

void ClassLoaderHelper::init$() {
}

$File* ClassLoaderHelper::mapAlternativeName($File* lib) {
	return nullptr;
}

$StringArray* ClassLoaderHelper::parsePath($String* ldPath$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, ldPath, ldPath$renamed);
	int32_t ldLen = $nc(ldPath)->length();
	$init($File);
	char16_t ps = $File::pathSeparatorChar;
	int32_t psCount = 0;
	if (ldPath->indexOf((int32_t)u'\"') >= 0) {
		$var($chars, buf, $new($chars, ldLen));
		int32_t bufLen = 0;
		for (int32_t i = 0; i < ldLen; ++i) {
			char16_t ch = ldPath->charAt(i);
			if (ch == u'\"') {
				while (true) {
					bool var$0 = ++i < ldLen;
					if (!(var$0 && (ch = ldPath->charAt(i)) != u'\"')) {
						break;
					}
					{
						buf->set(bufLen++, ch);
					}
				}
			} else {
				if (ch == ps) {
					++psCount;
					ch = u'\"';
				}
				buf->set(bufLen++, ch);
			}
		}
		$assign(ldPath, $new($String, buf, 0, bufLen));
		ldLen = bufLen;
		ps = u'\"';
	} else {
		for (int32_t i = ldPath->indexOf((int32_t)ps); i >= 0; i = ldPath->indexOf((int32_t)ps, i + 1)) {
			++psCount;
		}
	}
	$var($StringArray, paths, $new($StringArray, psCount + 1));
	int32_t pathStart = 0;
	for (int32_t j = 0; j < psCount; ++j) {
		int32_t pathEnd = ldPath->indexOf((int32_t)ps, pathStart);
		paths->set(j, (pathStart < pathEnd) ? $(ldPath->substring(pathStart, pathEnd)) : "."_s);
		pathStart = pathEnd + 1;
	}
	paths->set(psCount, (pathStart < ldLen) ? $(ldPath->substring(pathStart, ldLen)) : "."_s);
	return paths;
}

ClassLoaderHelper::ClassLoaderHelper() {
}

$Class* ClassLoaderHelper::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderHelper, name, initialize, &_ClassLoaderHelper_ClassInfo_, allocate$ClassLoaderHelper);
	return class$;
}

$Class* ClassLoaderHelper::class$ = nullptr;

		} // loader
	} // internal
} // jdk