#include <java/io/ObjectInputFilter$Config$BuiltinFilterFactory.h>

#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter.h>
#include <jcpp.h>

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _ObjectInputFilter$Config$BuiltinFilterFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ObjectInputFilter$Config$BuiltinFilterFactory, init$, void)},
	{"apply", "(Ljava/io/ObjectInputFilter;Ljava/io/ObjectInputFilter;)Ljava/io/ObjectInputFilter;", nullptr, $PUBLIC, $method(ObjectInputFilter$Config$BuiltinFilterFactory, apply, $ObjectInputFilter*, $ObjectInputFilter*, $ObjectInputFilter*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ObjectInputFilter$Config$BuiltinFilterFactory, apply, $Object*, Object$*, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$BuiltinFilterFactory, toString, $String*)},
	{}
};

$InnerClassInfo _ObjectInputFilter$Config$BuiltinFilterFactory_InnerClassesInfo_[] = {
	{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
	{"java.io.ObjectInputFilter$Config$BuiltinFilterFactory", "java.io.ObjectInputFilter$Config", "BuiltinFilterFactory", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ObjectInputFilter$Config$BuiltinFilterFactory_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.io.ObjectInputFilter$Config$BuiltinFilterFactory",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	_ObjectInputFilter$Config$BuiltinFilterFactory_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/BinaryOperator<Ljava/io/ObjectInputFilter;>;",
	nullptr,
	_ObjectInputFilter$Config$BuiltinFilterFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputFilter"
};

$Object* allocate$ObjectInputFilter$Config$BuiltinFilterFactory($Class* clazz) {
	return $of($alloc(ObjectInputFilter$Config$BuiltinFilterFactory));
}

void ObjectInputFilter$Config$BuiltinFilterFactory::init$() {
}

$ObjectInputFilter* ObjectInputFilter$Config$BuiltinFilterFactory::apply($ObjectInputFilter* oldFilter, $ObjectInputFilter* newFilter) {
	$ObjectInputFilter$Config::traceFilter("Builtin factory: {0} -> new: {1}"_s, $$new($ObjectArray, {
		$of(oldFilter),
		$of(newFilter)
	}));
	return newFilter;
}

$String* ObjectInputFilter$Config$BuiltinFilterFactory::toString() {
	return $of(this)->getClass()->getName();
}

$Object* ObjectInputFilter$Config$BuiltinFilterFactory::apply(Object$* oldFilter, Object$* newFilter) {
	return $of(this->apply($cast($ObjectInputFilter, oldFilter), $cast($ObjectInputFilter, newFilter)));
}

ObjectInputFilter$Config$BuiltinFilterFactory::ObjectInputFilter$Config$BuiltinFilterFactory() {
}

$Class* ObjectInputFilter$Config$BuiltinFilterFactory::load$($String* name, bool initialize) {
	$loadClass(ObjectInputFilter$Config$BuiltinFilterFactory, name, initialize, &_ObjectInputFilter$Config$BuiltinFilterFactory_ClassInfo_, allocate$ObjectInputFilter$Config$BuiltinFilterFactory);
	return class$;
}

$Class* ObjectInputFilter$Config$BuiltinFilterFactory::class$ = nullptr;

	} // io
} // java