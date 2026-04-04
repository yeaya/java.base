#include <java/lang/invoke/BoundMethodHandle$Specializer$Factory.h>
#include <java/lang/invoke/BoundMethodHandle$Specializer.h>
#include <java/lang/invoke/ClassSpecializer$Factory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundMethodHandle$Specializer = ::java::lang::invoke::BoundMethodHandle$Specializer;
using $ClassSpecializer$Factory = ::java::lang::invoke::ClassSpecializer$Factory;

namespace java {
	namespace lang {
		namespace invoke {

void BoundMethodHandle$Specializer$Factory::init$($BoundMethodHandle$Specializer* this$0) {
	$set(this, this$0, this$0);
	$ClassSpecializer$Factory::init$(this$0);
}

$String* BoundMethodHandle$Specializer$Factory::chooseFieldName($Class* type, int32_t index) {
	return $str({"arg"_s, $($ClassSpecializer$Factory::chooseFieldName(type, index))});
}

BoundMethodHandle$Specializer$Factory::BoundMethodHandle$Specializer$Factory() {
}

$Class* BoundMethodHandle$Specializer$Factory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/invoke/BoundMethodHandle$Specializer;", nullptr, $FINAL | $SYNTHETIC, $field(BoundMethodHandle$Specializer$Factory, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/BoundMethodHandle$Specializer;)V", nullptr, 0, $method(BoundMethodHandle$Specializer$Factory, init$, void, $BoundMethodHandle$Specializer*)},
		{"chooseFieldName", "(Ljava/lang/Class;I)Ljava/lang/String;", "(Ljava/lang/Class<*>;I)Ljava/lang/String;", $PROTECTED, $virtualMethod(BoundMethodHandle$Specializer$Factory, chooseFieldName, $String*, $Class*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.BoundMethodHandle$Specializer", "java.lang.invoke.BoundMethodHandle", "Specializer", $STATIC | $FINAL},
		{"java.lang.invoke.BoundMethodHandle$Specializer$Factory", "java.lang.invoke.BoundMethodHandle$Specializer", "Factory", 0},
		{"java.lang.invoke.ClassSpecializer$Factory", "java.lang.invoke.ClassSpecializer", "Factory", $PUBLIC},
		{"java.lang.invoke.BoundMethodHandle$SpeciesData", "java.lang.invoke.BoundMethodHandle", "SpeciesData", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.BoundMethodHandle$Specializer$Factory",
		"java.lang.invoke.ClassSpecializer$Factory",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/invoke/ClassSpecializer<Ljava/lang/invoke/BoundMethodHandle;Ljava/lang/String;Ljava/lang/invoke/BoundMethodHandle$SpeciesData;>.Factory;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.BoundMethodHandle"
	};
	$loadClass(BoundMethodHandle$Specializer$Factory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BoundMethodHandle$Specializer$Factory);
	});
	return class$;
}

$Class* BoundMethodHandle$Specializer$Factory::class$ = nullptr;

		} // invoke
	} // lang
} // java