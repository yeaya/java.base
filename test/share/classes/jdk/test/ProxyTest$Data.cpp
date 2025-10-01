#include <jdk/test/ProxyTest$Data.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jdk/test/ProxyTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $Arrays = ::java::util::Arrays;
using $ProxyTest = ::jdk::test::ProxyTest;

namespace jdk {
	namespace test {

$FieldInfo _ProxyTest$Data_FieldInfo_[] = {
	{"count", "I", nullptr, $PRIVATE | $STATIC, $staticField(ProxyTest$Data, count)},
	{"testcase", "I", nullptr, $FINAL, $field(ProxyTest$Data, testcase)},
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL, $field(ProxyTest$Data, loader)},
	{"module", "Ljava/lang/Module;", nullptr, $FINAL, $field(ProxyTest$Data, module)},
	{"interfaces", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $FINAL, $field(ProxyTest$Data, interfaces)},
	{}
};

$MethodInfo _ProxyTest$Data_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Module;Ljava/lang/ClassLoader;[Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/ClassLoader;[Ljava/lang/Class<*>;)V", $PUBLIC | $TRANSIENT, $method(static_cast<void(ProxyTest$Data::*)($Module*,$ClassLoader*,$ClassArray*)>(&ProxyTest$Data::init$))},
	{"<init>", "(Ljava/lang/ClassLoader;[Ljava/lang/Class;)V", "(Ljava/lang/ClassLoader;[Ljava/lang/Class<*>;)V", $PUBLIC | $TRANSIENT, $method(static_cast<void(ProxyTest$Data::*)($ClassLoader*,$ClassArray*)>(&ProxyTest$Data::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProxyTest$Data_InnerClassesInfo_[] = {
	{"jdk.test.ProxyTest$Data", "jdk.test.ProxyTest", "Data", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ProxyTest$Data_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.test.ProxyTest$Data",
	"java.lang.Object",
	nullptr,
	_ProxyTest$Data_FieldInfo_,
	_ProxyTest$Data_MethodInfo_,
	nullptr,
	nullptr,
	_ProxyTest$Data_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.test.ProxyTest"
};

$Object* allocate$ProxyTest$Data($Class* clazz) {
	return $of($alloc(ProxyTest$Data));
}

int32_t ProxyTest$Data::count = 0;

void ProxyTest$Data::init$($Module* m, $ClassLoader* loader, $ClassArray* interfaces) {
	$set(this, module, m);
	$set(this, loader, loader);
	$set(this, interfaces, interfaces);
	this->testcase = ++ProxyTest$Data::count;
}

void ProxyTest$Data::init$($ClassLoader* loader, $ClassArray* interfaces) {
	ProxyTest$Data::init$(nullptr, loader, interfaces);
}

$String* ProxyTest$Data::toString() {
	$var($String, expected, this->module != nullptr ? ($nc(this->module)->isNamed() ? $nc(this->module)->getName() : "unnamed"_s) : "dynamic"_s);
	return $String::format("%2d: Expected: %s %s loader: %s"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(this->testcase))),
		$of(expected),
		$($of($Arrays::toString(this->interfaces))),
		$of(this->loader)
	}));
}

void clinit$ProxyTest$Data($Class* class$) {
	ProxyTest$Data::count = 0;
}

ProxyTest$Data::ProxyTest$Data() {
}

$Class* ProxyTest$Data::load$($String* name, bool initialize) {
	$loadClass(ProxyTest$Data, name, initialize, &_ProxyTest$Data_ClassInfo_, clinit$ProxyTest$Data, allocate$ProxyTest$Data);
	return class$;
}

$Class* ProxyTest$Data::class$ = nullptr;

	} // test
} // jdk