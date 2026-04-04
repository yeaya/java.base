#include <java/lang/ModuleLayer$Controller.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
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
	$FieldInfo fieldInfos$$[] = {
		{"layer", "Ljava/lang/ModuleLayer;", nullptr, $PRIVATE | $FINAL, $field(ModuleLayer$Controller, layer$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ModuleLayer;)V", nullptr, 0, $method(ModuleLayer$Controller, init$, void, $ModuleLayer*)},
		{"addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;", nullptr, $PUBLIC, $method(ModuleLayer$Controller, addExports, ModuleLayer$Controller*, $Module*, $String*, $Module*)},
		{"addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;", nullptr, $PUBLIC, $method(ModuleLayer$Controller, addOpens, ModuleLayer$Controller*, $Module*, $String*, $Module*)},
		{"addReads", "(Ljava/lang/Module;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;", nullptr, $PUBLIC, $method(ModuleLayer$Controller, addReads, ModuleLayer$Controller*, $Module*, $Module*)},
		{"ensureInLayer", "(Ljava/lang/Module;)V", nullptr, $PRIVATE, $method(ModuleLayer$Controller, ensureInLayer, void, $Module*)},
		{"layer", "()Ljava/lang/ModuleLayer;", nullptr, $PUBLIC, $method(ModuleLayer$Controller, layer, $ModuleLayer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ModuleLayer$Controller", "java.lang.ModuleLayer", "Controller", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.ModuleLayer$Controller",
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
		"java.lang.ModuleLayer"
	};
	$loadClass(ModuleLayer$Controller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleLayer$Controller);
	});
	return class$;
}

$Class* ModuleLayer$Controller::class$ = nullptr;

	} // lang
} // java