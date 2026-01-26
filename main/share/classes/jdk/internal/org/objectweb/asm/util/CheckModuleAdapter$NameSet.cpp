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

$FieldInfo _CheckModuleAdapter$NameSet_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CheckModuleAdapter$NameSet, type)},
	{"names", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(CheckModuleAdapter$NameSet, names)},
	{}
};

$MethodInfo _CheckModuleAdapter$NameSet_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CheckModuleAdapter$NameSet, init$, void, $String*)},
	{"checkNameNotAlreadyDeclared", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(CheckModuleAdapter$NameSet, checkNameNotAlreadyDeclared, void, $String*)},
	{}
};

$InnerClassInfo _CheckModuleAdapter$NameSet_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.util.CheckModuleAdapter$NameSet", "jdk.internal.org.objectweb.asm.util.CheckModuleAdapter", "NameSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CheckModuleAdapter$NameSet_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.CheckModuleAdapter$NameSet",
	"java.lang.Object",
	nullptr,
	_CheckModuleAdapter$NameSet_FieldInfo_,
	_CheckModuleAdapter$NameSet_MethodInfo_,
	nullptr,
	nullptr,
	_CheckModuleAdapter$NameSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.util.CheckModuleAdapter"
};

$Object* allocate$CheckModuleAdapter$NameSet($Class* clazz) {
	return $of($alloc(CheckModuleAdapter$NameSet));
}

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
	$loadClass(CheckModuleAdapter$NameSet, name, initialize, &_CheckModuleAdapter$NameSet_ClassInfo_, allocate$CheckModuleAdapter$NameSet);
	return class$;
}

$Class* CheckModuleAdapter$NameSet::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk