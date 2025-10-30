#include <jdk/internal/org/objectweb/asm/Handle.h>

#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef H_INVOKEINTERFACE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$CompoundAttribute _Handle_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Handle_FieldInfo_[] = {
	{"tag", "I", nullptr, $PRIVATE | $FINAL, $field(Handle, tag)},
	{"owner", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Handle, owner)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Handle, name)},
	{"descriptor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Handle, descriptor)},
	{"isInterface", "Z", nullptr, $PRIVATE | $FINAL, $field(Handle, isInterface$)},
	{}
};

$MethodInfo _Handle_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Handle::*)(int32_t,$String*,$String*,$String*)>(&Handle::init$)), nullptr, nullptr, _Handle_MethodAnnotations_init$0},
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Handle::*)(int32_t,$String*,$String*,$String*,bool)>(&Handle::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDesc", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Handle::*)()>(&Handle::getDesc))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Handle::*)()>(&Handle::getName))},
	{"getOwner", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Handle::*)()>(&Handle::getOwner))},
	{"getTag", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Handle::*)()>(&Handle::getTag))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isInterface", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Handle::*)()>(&Handle::isInterface))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Handle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.Handle",
	"java.lang.Object",
	nullptr,
	_Handle_FieldInfo_,
	_Handle_MethodInfo_
};

$Object* allocate$Handle($Class* clazz) {
	return $of($alloc(Handle));
}

void Handle::init$(int32_t tag, $String* owner, $String* name, $String* descriptor) {
	Handle::init$(tag, owner, name, descriptor, tag == $Opcodes::H_INVOKEINTERFACE);
}

void Handle::init$(int32_t tag, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	this->tag = tag;
	$set(this, owner, owner);
	$set(this, name, name);
	$set(this, descriptor, descriptor);
	this->isInterface$ = isInterface;
}

int32_t Handle::getTag() {
	return this->tag;
}

$String* Handle::getOwner() {
	return this->owner;
}

$String* Handle::getName() {
	return this->name;
}

$String* Handle::getDesc() {
	return this->descriptor;
}

bool Handle::isInterface() {
	return this->isInterface$;
}

bool Handle::equals(Object$* object) {
	if ($equals(object, this)) {
		return true;
	}
	if (!($instanceOf(Handle, object))) {
		return false;
	}
	$var(Handle, handle, $cast(Handle, object));
	bool var$1 = this->tag == $nc(handle)->tag && this->isInterface$ == handle->isInterface$ && $nc(this->owner)->equals(handle->owner);
	bool var$0 = var$1 && $nc(this->name)->equals(handle->name);
	return var$0 && $nc(this->descriptor)->equals(handle->descriptor);
}

int32_t Handle::hashCode() {
	int32_t var$0 = this->tag + (this->isInterface$ ? 64 : 0);
	int32_t var$3 = $nc(this->owner)->hashCode();
	int32_t var$2 = var$3 * $nc(this->name)->hashCode();
	int32_t var$1 = var$2 * $nc(this->descriptor)->hashCode();
	return var$0 + var$1;
}

$String* Handle::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({this->owner, $$str(u'.'), this->name, this->descriptor, " ("_s, $$str(this->tag), (this->isInterface$ ? " itf"_s : ""_s), $$str(u')')});
}

Handle::Handle() {
}

$Class* Handle::load$($String* name, bool initialize) {
	$loadClass(Handle, name, initialize, &_Handle_ClassInfo_, allocate$Handle);
	return class$;
}

$Class* Handle::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk