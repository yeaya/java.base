#include <sun/security/action/PutAllAction.h>

#include <java/security/Provider.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $Map = ::java::util::Map;

namespace sun {
	namespace security {
		namespace action {

$FieldInfo _PutAllAction_FieldInfo_[] = {
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE | $FINAL, $field(PutAllAction, provider)},
	{"map", "Ljava/util/Map;", "Ljava/util/Map<**>;", $PRIVATE | $FINAL, $field(PutAllAction, map)},
	{}
};

$MethodInfo _PutAllAction_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Provider;Ljava/util/Map;)V", "(Ljava/security/Provider;Ljava/util/Map<**>;)V", $PUBLIC, $method(PutAllAction, init$, void, $Provider*, $Map*)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PutAllAction, run, $Object*)},
	{}
};

$ClassInfo _PutAllAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.action.PutAllAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PutAllAction_FieldInfo_,
	_PutAllAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;"
};

$Object* allocate$PutAllAction($Class* clazz) {
	return $of($alloc(PutAllAction));
}

void PutAllAction::init$($Provider* provider, $Map* map) {
	$set(this, provider, provider);
	$set(this, map, map);
}

$Object* PutAllAction::run() {
	$nc(this->provider)->putAll(this->map);
	return $of(nullptr);
}

PutAllAction::PutAllAction() {
}

$Class* PutAllAction::load$($String* name, bool initialize) {
	$loadClass(PutAllAction, name, initialize, &_PutAllAction_ClassInfo_, allocate$PutAllAction);
	return class$;
}

$Class* PutAllAction::class$ = nullptr;

		} // action
	} // security
} // sun