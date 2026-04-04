#include <ImmutableLocal.h>
#include <ImmutableLocal$1.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ImmutableLocal$1 = ::ImmutableLocal$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

$ThreadLocal* ImmutableLocal::cache = nullptr;

void ImmutableLocal::init$() {
}

void ImmutableLocal::main($StringArray* args) {
	$init(ImmutableLocal);
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"cache.get() = "_s, $(ImmutableLocal::cache->get())}));
}

void ImmutableLocal::clinit$($Class* clazz) {
	$assignStatic(ImmutableLocal::cache, $new($ImmutableLocal$1));
}

ImmutableLocal::ImmutableLocal() {
}

$Class* ImmutableLocal::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cache", "Ljava/lang/ThreadLocal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImmutableLocal, cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImmutableLocal, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImmutableLocal, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImmutableLocal$ImmutableThreadLocal", "ImmutableLocal", "ImmutableThreadLocal", $PUBLIC | $STATIC | $ABSTRACT},
		{"ImmutableLocal$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ImmutableLocal",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ImmutableLocal$ImmutableThreadLocal,ImmutableLocal$1"
	};
	$loadClass(ImmutableLocal, name, initialize, &classInfo$$, ImmutableLocal::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ImmutableLocal);
	});
	return class$;
}

$Class* ImmutableLocal::class$ = nullptr;