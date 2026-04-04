#include <jdk/test/ProxyTest$Data.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
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

namespace jdk {
	namespace test {

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
	$useLocalObjectStack();
	$var($String, expected, this->module != nullptr ? (this->module->isNamed() ? this->module->getName() : "unnamed"_s) : "dynamic"_s);
	return $String::format("%2d: Expected: %s %s loader: %s"_s, $$new($ObjectArray, {
		$($Integer::valueOf(this->testcase)),
		expected,
		$($Arrays::toString(this->interfaces)),
		this->loader
	}));
}

void ProxyTest$Data::clinit$($Class* clazz) {
	ProxyTest$Data::count = 0;
}

ProxyTest$Data::ProxyTest$Data() {
}

$Class* ProxyTest$Data::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, $PRIVATE | $STATIC, $staticField(ProxyTest$Data, count)},
		{"testcase", "I", nullptr, $FINAL, $field(ProxyTest$Data, testcase)},
		{"loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL, $field(ProxyTest$Data, loader)},
		{"module", "Ljava/lang/Module;", nullptr, $FINAL, $field(ProxyTest$Data, module)},
		{"interfaces", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $FINAL, $field(ProxyTest$Data, interfaces)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Module;Ljava/lang/ClassLoader;[Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/ClassLoader;[Ljava/lang/Class<*>;)V", $PUBLIC | $TRANSIENT, $method(ProxyTest$Data, init$, void, $Module*, $ClassLoader*, $ClassArray*)},
		{"<init>", "(Ljava/lang/ClassLoader;[Ljava/lang/Class;)V", "(Ljava/lang/ClassLoader;[Ljava/lang/Class<*>;)V", $PUBLIC | $TRANSIENT, $method(ProxyTest$Data, init$, void, $ClassLoader*, $ClassArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProxyTest$Data, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.test.ProxyTest$Data", "jdk.test.ProxyTest", "Data", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.test.ProxyTest$Data",
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
		"jdk.test.ProxyTest"
	};
	$loadClass(ProxyTest$Data, name, initialize, &classInfo$$, ProxyTest$Data::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyTest$Data);
	});
	return class$;
}

$Class* ProxyTest$Data::class$ = nullptr;

	} // test
} // jdk