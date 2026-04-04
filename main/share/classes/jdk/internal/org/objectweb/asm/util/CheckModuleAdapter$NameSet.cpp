#include <jdk/internal/org/objectweb/asm/util/CheckModuleAdapter$NameSet.h>
#include <java/util/HashSet.h>
#include <jdk/internal/org/objectweb/asm/util/CheckModuleAdapter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

void CheckModuleAdapter$NameSet::init$($String* type) {
	$set(this, type, type);
	$set(this, names, $new($HashSet));
}

void CheckModuleAdapter$NameSet::checkNameNotAlreadyDeclared($String* name) {
	if (!$nc(this->names)->add(name)) {
		$throwNew($IllegalArgumentException, $$str({this->type, " \'"_s, name, "\' already declared"_s}));
	}
}

CheckModuleAdapter$NameSet::CheckModuleAdapter$NameSet() {
}

$Class* CheckModuleAdapter$NameSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CheckModuleAdapter$NameSet, type)},
		{"names", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(CheckModuleAdapter$NameSet, names)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CheckModuleAdapter$NameSet, init$, void, $String*)},
		{"checkNameNotAlreadyDeclared", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(CheckModuleAdapter$NameSet, checkNameNotAlreadyDeclared, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.util.CheckModuleAdapter$NameSet", "jdk.internal.org.objectweb.asm.util.CheckModuleAdapter", "NameSet", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.org.objectweb.asm.util.CheckModuleAdapter$NameSet",
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
		"jdk.internal.org.objectweb.asm.util.CheckModuleAdapter"
	};
	$loadClass(CheckModuleAdapter$NameSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckModuleAdapter$NameSet);
	});
	return class$;
}

$Class* CheckModuleAdapter$NameSet::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk