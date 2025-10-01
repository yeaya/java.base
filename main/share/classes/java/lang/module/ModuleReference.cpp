#include <java/lang/module/ModuleReference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleReader.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleReader = ::java::lang::module::ModuleReader;
using $URI = ::java::net::URI;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _ModuleReference_FieldInfo_[] = {
	{"descriptor", "Ljava/lang/module/ModuleDescriptor;", nullptr, $PRIVATE | $FINAL, $field(ModuleReference, descriptor$)},
	{"location", "Ljava/net/URI;", nullptr, $PRIVATE | $FINAL, $field(ModuleReference, location$)},
	{}
};

$MethodInfo _ModuleReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;)V", nullptr, $PROTECTED, $method(static_cast<void(ModuleReference::*)($ModuleDescriptor*,$URI*)>(&ModuleReference::init$))},
	{"descriptor", "()Ljava/lang/module/ModuleDescriptor;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ModuleDescriptor*(ModuleReference::*)()>(&ModuleReference::descriptor))},
	{"location", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/URI;>;", $PUBLIC | $FINAL, $method(static_cast<$Optional*(ModuleReference::*)()>(&ModuleReference::location))},
	{"open", "()Ljava/lang/module/ModuleReader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ModuleReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.module.ModuleReference",
	"java.lang.Object",
	nullptr,
	_ModuleReference_FieldInfo_,
	_ModuleReference_MethodInfo_
};

$Object* allocate$ModuleReference($Class* clazz) {
	return $of($alloc(ModuleReference));
}

void ModuleReference::init$($ModuleDescriptor* descriptor, $URI* location) {
	$set(this, descriptor$, $cast($ModuleDescriptor, $Objects::requireNonNull(descriptor)));
	$set(this, location$, location);
}

$ModuleDescriptor* ModuleReference::descriptor() {
	return this->descriptor$;
}

$Optional* ModuleReference::location() {
	return $Optional::ofNullable(this->location$);
}

ModuleReference::ModuleReference() {
}

$Class* ModuleReference::load$($String* name, bool initialize) {
	$loadClass(ModuleReference, name, initialize, &_ModuleReference_ClassInfo_, allocate$ModuleReference);
	return class$;
}

$Class* ModuleReference::class$ = nullptr;

		} // module
	} // lang
} // java