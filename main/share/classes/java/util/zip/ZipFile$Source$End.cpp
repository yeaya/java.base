#include <java/util/zip/ZipFile$Source$End.h>
#include <java/util/zip/ZipFile$Source.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace zip {

void ZipFile$Source$End::init$() {
}

ZipFile$Source$End::ZipFile$Source$End() {
}

$Class* ZipFile$Source$End::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"centot", "I", nullptr, 0, $field(ZipFile$Source$End, centot)},
		{"cenlen", "J", nullptr, 0, $field(ZipFile$Source$End, cenlen)},
		{"cenoff", "J", nullptr, 0, $field(ZipFile$Source$End, cenoff)},
		{"endpos", "J", nullptr, 0, $field(ZipFile$Source$End, endpos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ZipFile$Source$End, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.zip.ZipFile$Source", "java.util.zip.ZipFile", "Source", $PRIVATE | $STATIC},
		{"java.util.zip.ZipFile$Source$End", "java.util.zip.ZipFile$Source", "End", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.zip.ZipFile$Source$End",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.zip.ZipFile"
	};
	$loadClass(ZipFile$Source$End, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFile$Source$End);
	});
	return class$;
}

$Class* ZipFile$Source$End::class$ = nullptr;

		} // zip
	} // util
} // java