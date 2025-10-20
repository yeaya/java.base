#include <jdk/internal/org/objectweb/asm/commons/SimpleRemapper.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _SimpleRemapper_FieldInfo_[] = {
	{"mapping", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(SimpleRemapper, mapping)},
	{}
};

$MethodInfo _SimpleRemapper_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(SimpleRemapper::*)($Map*)>(&SimpleRemapper::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleRemapper::*)($String*,$String*)>(&SimpleRemapper::init$))},
	{"map", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapFieldName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapInvokeDynamicMethodName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapMethodName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleRemapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.SimpleRemapper",
	"jdk.internal.org.objectweb.asm.commons.Remapper",
	nullptr,
	_SimpleRemapper_FieldInfo_,
	_SimpleRemapper_MethodInfo_
};

$Object* allocate$SimpleRemapper($Class* clazz) {
	return $of($alloc(SimpleRemapper));
}

void SimpleRemapper::init$($Map* mapping) {
	$Remapper::init$();
	$set(this, mapping, mapping);
}

void SimpleRemapper::init$($String* oldName, $String* newName) {
	$Remapper::init$();
	$set(this, mapping, $Collections::singletonMap(oldName, newName));
}

$String* SimpleRemapper::mapMethodName($String* owner, $String* name, $String* descriptor) {
	$useLocalCurrentObjectStackCache();
	$var($String, remappedName, map($$str({owner, $$str(u'.'), name, descriptor})));
	return remappedName == nullptr ? name : remappedName;
}

$String* SimpleRemapper::mapInvokeDynamicMethodName($String* name, $String* descriptor) {
	$useLocalCurrentObjectStackCache();
	$var($String, remappedName, map($$str({$$str(u'.'), name, descriptor})));
	return remappedName == nullptr ? name : remappedName;
}

$String* SimpleRemapper::mapFieldName($String* owner, $String* name, $String* descriptor) {
	$useLocalCurrentObjectStackCache();
	$var($String, remappedName, map($$str({owner, $$str(u'.'), name})));
	return remappedName == nullptr ? name : remappedName;
}

$String* SimpleRemapper::map($String* key) {
	return $cast($String, $nc(this->mapping)->get(key));
}

SimpleRemapper::SimpleRemapper() {
}

$Class* SimpleRemapper::load$($String* name, bool initialize) {
	$loadClass(SimpleRemapper, name, initialize, &_SimpleRemapper_ClassInfo_, allocate$SimpleRemapper);
	return class$;
}

$Class* SimpleRemapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk