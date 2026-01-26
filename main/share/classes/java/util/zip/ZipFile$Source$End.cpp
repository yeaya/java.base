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

$FieldInfo _ZipFile$Source$End_FieldInfo_[] = {
	{"centot", "I", nullptr, 0, $field(ZipFile$Source$End, centot)},
	{"cenlen", "J", nullptr, 0, $field(ZipFile$Source$End, cenlen)},
	{"cenoff", "J", nullptr, 0, $field(ZipFile$Source$End, cenoff)},
	{"endpos", "J", nullptr, 0, $field(ZipFile$Source$End, endpos)},
	{}
};

$MethodInfo _ZipFile$Source$End_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ZipFile$Source$End, init$, void)},
	{}
};

$InnerClassInfo _ZipFile$Source$End_InnerClassesInfo_[] = {
	{"java.util.zip.ZipFile$Source", "java.util.zip.ZipFile", "Source", $PRIVATE | $STATIC},
	{"java.util.zip.ZipFile$Source$End", "java.util.zip.ZipFile$Source", "End", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ZipFile$Source$End_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.ZipFile$Source$End",
	"java.lang.Object",
	nullptr,
	_ZipFile$Source$End_FieldInfo_,
	_ZipFile$Source$End_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFile$Source$End_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.ZipFile"
};

$Object* allocate$ZipFile$Source$End($Class* clazz) {
	return $of($alloc(ZipFile$Source$End));
}

void ZipFile$Source$End::init$() {
}

ZipFile$Source$End::ZipFile$Source$End() {
}

$Class* ZipFile$Source$End::load$($String* name, bool initialize) {
	$loadClass(ZipFile$Source$End, name, initialize, &_ZipFile$Source$End_ClassInfo_, allocate$ZipFile$Source$End);
	return class$;
}

$Class* ZipFile$Source$End::class$ = nullptr;

		} // zip
	} // util
} // java