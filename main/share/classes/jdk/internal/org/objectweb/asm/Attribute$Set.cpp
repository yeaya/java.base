#include <jdk/internal/org/objectweb/asm/Attribute$Set.h>

#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jcpp.h>

#undef SIZE_INCREMENT

using $AttributeArray = $Array<::jdk::internal::org::objectweb::asm$::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _Attribute$Set_FieldInfo_[] = {
	{"SIZE_INCREMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Attribute$Set, SIZE_INCREMENT)},
	{"size", "I", nullptr, $PRIVATE, $field(Attribute$Set, size)},
	{"data", "[Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, $PRIVATE, $field(Attribute$Set, data)},
	{}
};

$MethodInfo _Attribute$Set_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Attribute$Set::*)()>(&Attribute$Set::init$))},
	{"add", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PRIVATE, $method(static_cast<void(Attribute$Set::*)($Attribute*)>(&Attribute$Set::add))},
	{"addAttributes", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, 0, $method(static_cast<void(Attribute$Set::*)($Attribute*)>(&Attribute$Set::addAttributes))},
	{"contains", "(Ljdk/internal/org/objectweb/asm/Attribute;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Attribute$Set::*)($Attribute*)>(&Attribute$Set::contains))},
	{"toArray", "()[Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, 0, $method(static_cast<$AttributeArray*(Attribute$Set::*)()>(&Attribute$Set::toArray))},
	{}
};

$InnerClassInfo _Attribute$Set_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.Attribute$Set", "jdk.internal.org.objectweb.asm.Attribute", "Set", $STATIC | $FINAL},
	{}
};

$ClassInfo _Attribute$Set_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.Attribute$Set",
	"java.lang.Object",
	nullptr,
	_Attribute$Set_FieldInfo_,
	_Attribute$Set_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute$Set_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.Attribute"
};

$Object* allocate$Attribute$Set($Class* clazz) {
	return $of($alloc(Attribute$Set));
}

void Attribute$Set::init$() {
	$set(this, data, $new($AttributeArray, Attribute$Set::SIZE_INCREMENT));
}

void Attribute$Set::addAttributes($Attribute* attributeList) {
	$var($Attribute, attribute, attributeList);
	while (attribute != nullptr) {
		if (!contains(attribute)) {
			add(attribute);
		}
		$assign(attribute, attribute->nextAttribute);
	}
}

$AttributeArray* Attribute$Set::toArray() {
	$var($AttributeArray, result, $new($AttributeArray, this->size));
	$System::arraycopy(this->data, 0, result, 0, this->size);
	return result;
}

bool Attribute$Set::contains($Attribute* attribute) {
	for (int32_t i = 0; i < this->size; ++i) {
		if ($nc($nc($nc(this->data)->get(i))->type)->equals($nc(attribute)->type)) {
			return true;
		}
	}
	return false;
}

void Attribute$Set::add($Attribute* attribute) {
	if (this->size >= $nc(this->data)->length) {
		$var($AttributeArray, newData, $new($AttributeArray, $nc(this->data)->length + Attribute$Set::SIZE_INCREMENT));
		$System::arraycopy(this->data, 0, newData, 0, this->size);
		$set(this, data, newData);
	}
	$nc(this->data)->set(this->size++, attribute);
}

Attribute$Set::Attribute$Set() {
}

$Class* Attribute$Set::load$($String* name, bool initialize) {
	$loadClass(Attribute$Set, name, initialize, &_Attribute$Set_ClassInfo_, allocate$Attribute$Set);
	return class$;
}

$Class* Attribute$Set::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk