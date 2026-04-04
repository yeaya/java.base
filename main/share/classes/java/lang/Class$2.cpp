#include <java/lang/Class$2.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace java {
	namespace lang {

void Class$2::init$($Class* this$0) {
	$set(this, this$0, this$0);
}

$Object* Class$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($List, list, $new($ArrayList));
	$Class* currentClass = this->this$0;
	while (currentClass != nullptr) {
		{
			$var($ClassArray, arr$, currentClass->getDeclaredClasses());
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$Class* m = arr$->get(i$);
				if ($Modifier::isPublic($nc(m)->getModifiers())) {
					list->add(m);
				}
			}
		}
		currentClass = currentClass->getSuperclass();
	}
	return $cast($ClassArray, list->toArray($$new($ClassArray, 0)));
}

Class$2::Class$2() {
}

$Class* Class$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(Class$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(Class$2, init$, void, $Class*)},
		{"run", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(Class$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.Class",
		"getClasses",
		"()[Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Class$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Class$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/lang/Class<*>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Class"
	};
	$loadClass(Class$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Class$2);
	});
	return class$;
}

$Class* Class$2::class$ = nullptr;

	} // lang
} // java