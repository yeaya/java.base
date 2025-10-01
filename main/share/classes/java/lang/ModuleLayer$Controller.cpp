#include <java/lang/ModuleLayer$Controller.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;

namespace java {
	namespace lang {

$FieldInfo _ModuleLayer$Controller_FieldInfo_[] = {
	{"layer", "Ljava/lang/ModuleLayer;", nullptr, $PRIVATE | $FINAL, $field(ModuleLayer$Controller, layer$)},
	{}
};

$MethodInfo _ModuleLayer$Controller_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ModuleLayer;)V", nullptr, 0, $method(static_cast<void(ModuleLayer$Controller::*)($ModuleLayer*)>(&ModuleLayer$Controller::init$))},
	{"addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;", nullptr, $PUBLIC, $method(static_cast<ModuleLayer$Controller*(ModuleLayer$Controller::*)($Module*,$String*,$Module*)>(&ModuleLayer$Controller::addExports))},
	{"addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;", nullptr, $PUBLIC, $method(static_cast<ModuleLayer$Controller*(ModuleLayer$Controller::*)($Module*,$String*,$Module*)>(&ModuleLayer$Controller::addOpens))},
	{"addReads", "(Ljava/lang/Module;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;", nullptr, $PUBLIC, $method(static_cast<ModuleLayer$Controller*(ModuleLayer$Controller::*)($Module*,$Module*)>(&ModuleLayer$Controller::addReads))},
	{"ensureInLayer", "(Ljava/lang/Module;)V", nullptr, $PRIVATE, $method(static_cast<void(ModuleLayer$Controller::*)($Module*)>(&ModuleLayer$Controller::ensureInLayer))},
	{"layer", "()Ljava/lang/ModuleLayer;", nullptr, $PUBLIC, $method(static_cast<$ModuleLayer*(ModuleLayer$Controller::*)()>(&ModuleLayer$Controller::layer))},
	{}
};

$InnerClassInfo _ModuleLayer$Controller_InnerClassesInfo_[] = {
	{"java.lang.ModuleLayer$Controller", "java.lang.ModuleLayer", "Controller", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _ModuleLayer$Controller_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.ModuleLayer$Controller",
	"java.lang.Object",
	nullptr,
	_ModuleLayer$Controller_FieldInfo_,
	_ModuleLayer$Controller_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleLayer$Controller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ModuleLayer"
};

$Object* allocate$ModuleLayer$Controller($Class* clazz) {
	return $of($alloc(ModuleLayer$Controller));
}

void ModuleLayer$Controller::init$($ModuleLayer* layer) {
	$set(this, layer$, layer);
}

$ModuleLayer* ModuleLayer$Controller::layer() {
	return this->layer$;
}

void ModuleLayer$Controller::ensureInLayer($Module* source) {
	if ($nc(source)->getLayer() != this->layer$) {
		$throwNew($IllegalArgumentException, $$str({source, " not in layer"_s}));
	}
}

ModuleLayer$Controller* ModuleLayer$Controller::addReads($Module* source, $Module* target) {
	ensureInLayer(source);
	$nc(source)->implAddReads(target);
	return this;
}

ModuleLayer$Controller* ModuleLayer$Controller::addExports($Module* source, $String* pn, $Module* target) {
	ensureInLayer(source);
	$nc(source)->implAddExports(pn, target);
	return this;
}

ModuleLayer$Controller* ModuleLayer$Controller::addOpens($Module* source, $String* pn, $Module* target) {
	ensureInLayer(source);
	$nc(source)->implAddOpens(pn, target);
	return this;
}

ModuleLayer$Controller::ModuleLayer$Controller() {
}

$Class* ModuleLayer$Controller::load$($String* name, bool initialize) {
	$loadClass(ModuleLayer$Controller, name, initialize, &_ModuleLayer$Controller_ClassInfo_, allocate$ModuleLayer$Controller);
	return class$;
}

$Class* ModuleLayer$Controller::class$ = nullptr;

	} // lang
} // java