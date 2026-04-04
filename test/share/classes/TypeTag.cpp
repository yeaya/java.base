#include <TypeTag.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void TypeTag::init$() {
}

void TypeTag::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TypeTag);
	$beforeCallerSensitive();
	$var($ClassArray, v, nullptr);
	$assign(v, $nc($Integer::TYPE)->getDeclaredClasses());
	if (v == nullptr || v->length != 0) {
		$throwNew($Exception, "Integer.TYPE.getDeclaredClasses is not working"_s);
	}
	$nc($System::out)->println($$str({"Integer.TYPE: "_s, $(v->toString())}));
	$assign(v, TypeTag::class$->getDeclaredClasses());
	if (v == nullptr) {
		$throwNew($Exception, "TypeTag.class.getDeclaredClasses returned null"_s);
	}
	$System::out->println($$str({"TypeTag.class: "_s, $(v->toString())}));
	int32_t n = 0;
	for (int32_t i = 0; i < v->length; ++i) {
		$var($String, name, $nc(v->get(i))->getName());
		$System::out->print(name);
		if (!$nc(name)->matches("\\D\\w*\\$\\d*"_s)) {
			++n;
			$System::out->println(" -- user class"_s);
		} else {
			$System::out->println();
		}
	}
	if (n != 1) {
		$throwNew($Exception, "TypeTag.class.getDeclaredClasses found too many classes"_s);
	}
}

TypeTag::TypeTag() {
}

$Class* TypeTag::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TypeTag, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeTag, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeTag$Inner", "TypeTag", "Inner", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TypeTag",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TypeTag$Inner"
	};
	$loadClass(TypeTag, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeTag);
	});
	return class$;
}

$Class* TypeTag::class$ = nullptr;