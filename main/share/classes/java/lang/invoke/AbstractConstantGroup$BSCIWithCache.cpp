#include <java/lang/invoke/AbstractConstantGroup$BSCIWithCache.h>

#include <java/lang/AssertionError.h>
#include <java/lang/invoke/AbstractConstantGroup$WithCache.h>
#include <java/lang/invoke/AbstractConstantGroup.h>
#include <java/lang/invoke/ConstantGroup.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractConstantGroup = ::java::lang::invoke::AbstractConstantGroup;
using $AbstractConstantGroup$WithCache = ::java::lang::invoke::AbstractConstantGroup$WithCache;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _AbstractConstantGroup$BSCIWithCache_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractConstantGroup$BSCIWithCache, $assertionsDisabled)},
	{"bsm", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$BSCIWithCache, bsm)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$BSCIWithCache, name)},
	{"type", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(AbstractConstantGroup$BSCIWithCache, type)},
	{}
};

$MethodInfo _AbstractConstantGroup$BSCIWithCache_MethodInfo_[] = {
	{"*asList", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"*asList", "(Ljava/lang/Object;)Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*copyConstants", "(II[Ljava/lang/Object;I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"*copyConstants", "(II[Ljava/lang/Object;ILjava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*get", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;Ljava/lang/Object;I)V", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;TT;I)V", 0, $method(static_cast<void(AbstractConstantGroup$BSCIWithCache::*)($MethodHandle*,$String*,Object$*,int32_t)>(&AbstractConstantGroup$BSCIWithCache::init$))},
	{"bootstrapMethod", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"invocationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"invocationType", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"*isPresent", "(I)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC | $FINAL},
	{"*subGroup", "(II)Ljava/lang/invoke/ConstantGroup;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractConstantGroup$BSCIWithCache_InnerClassesInfo_[] = {
	{"java.lang.invoke.AbstractConstantGroup$BSCIWithCache", "java.lang.invoke.AbstractConstantGroup", "BSCIWithCache", $STATIC},
	{"java.lang.invoke.AbstractConstantGroup$WithCache", "java.lang.invoke.AbstractConstantGroup", "WithCache", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractConstantGroup$BSCIWithCache_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.AbstractConstantGroup$BSCIWithCache",
	"java.lang.invoke.AbstractConstantGroup$WithCache",
	"java.lang.invoke.BootstrapCallInfo",
	_AbstractConstantGroup$BSCIWithCache_FieldInfo_,
	_AbstractConstantGroup$BSCIWithCache_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/invoke/AbstractConstantGroup$WithCache;Ljava/lang/invoke/BootstrapCallInfo<TT;>;",
	nullptr,
	_AbstractConstantGroup$BSCIWithCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.AbstractConstantGroup"
};

$Object* allocate$AbstractConstantGroup$BSCIWithCache($Class* clazz) {
	return $of($alloc(AbstractConstantGroup$BSCIWithCache));
}

$Object* AbstractConstantGroup$BSCIWithCache::get(int32_t i) {
	 return this->$AbstractConstantGroup$WithCache::get(i);
}

$Object* AbstractConstantGroup$BSCIWithCache::get(int32_t i, Object$* ifNotAvailable) {
	 return this->$AbstractConstantGroup$WithCache::get(i, ifNotAvailable);
}

bool AbstractConstantGroup$BSCIWithCache::isPresent(int32_t i) {
	 return this->$AbstractConstantGroup$WithCache::isPresent(i);
}

int32_t AbstractConstantGroup$BSCIWithCache::size() {
	 return this->$AbstractConstantGroup$WithCache::size();
}

$List* AbstractConstantGroup$BSCIWithCache::asList() {
	 return this->$AbstractConstantGroup$WithCache::asList();
}

$List* AbstractConstantGroup$BSCIWithCache::asList(Object$* ifNotPresent) {
	 return this->$AbstractConstantGroup$WithCache::asList(ifNotPresent);
}

$ConstantGroup* AbstractConstantGroup$BSCIWithCache::subGroup(int32_t start, int32_t end) {
	 return this->$AbstractConstantGroup$WithCache::subGroup(start, end);
}

int32_t AbstractConstantGroup$BSCIWithCache::copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos) {
	 return this->$AbstractConstantGroup$WithCache::copyConstants(start, end, buf, pos);
}

int32_t AbstractConstantGroup$BSCIWithCache::copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos, Object$* ifNotPresent) {
	 return this->$AbstractConstantGroup$WithCache::copyConstants(start, end, buf, pos, ifNotPresent);
}

int32_t AbstractConstantGroup$BSCIWithCache::hashCode() {
	 return this->$AbstractConstantGroup$WithCache::hashCode();
}

bool AbstractConstantGroup$BSCIWithCache::equals(Object$* obj) {
	 return this->$AbstractConstantGroup$WithCache::equals(obj);
}

$Object* AbstractConstantGroup$BSCIWithCache::clone() {
	 return this->$AbstractConstantGroup$WithCache::clone();
}

void AbstractConstantGroup$BSCIWithCache::finalize() {
	this->$AbstractConstantGroup$WithCache::finalize();
}

bool AbstractConstantGroup$BSCIWithCache::$assertionsDisabled = false;

$String* AbstractConstantGroup$BSCIWithCache::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({this->bsm, "/"_s, this->name, ":"_s, this->type}));
	return $concat(var$0, $($AbstractConstantGroup$WithCache::toString()));
}

void AbstractConstantGroup$BSCIWithCache::init$($MethodHandle* bsm, $String* name, Object$* type, int32_t size) {
	$AbstractConstantGroup$WithCache::init$(size);
	$set(this, type, type);
	$set(this, bsm, bsm);
	$set(this, name, name);
	if (!AbstractConstantGroup$BSCIWithCache::$assertionsDisabled && !($instanceOf($Class, type) || $instanceOf($MethodType, type))) {
		$throwNew($AssertionError);
	}
}

$MethodHandle* AbstractConstantGroup$BSCIWithCache::bootstrapMethod() {
	return this->bsm;
}

$String* AbstractConstantGroup$BSCIWithCache::invocationName() {
	return this->name;
}

$Object* AbstractConstantGroup$BSCIWithCache::invocationType() {
	return $of(this->type);
}

void clinit$AbstractConstantGroup$BSCIWithCache($Class* class$) {
	$load($AbstractConstantGroup);
	AbstractConstantGroup$BSCIWithCache::$assertionsDisabled = !$AbstractConstantGroup::class$->desiredAssertionStatus();
}

AbstractConstantGroup$BSCIWithCache::AbstractConstantGroup$BSCIWithCache() {
}

$Class* AbstractConstantGroup$BSCIWithCache::load$($String* name, bool initialize) {
	$loadClass(AbstractConstantGroup$BSCIWithCache, name, initialize, &_AbstractConstantGroup$BSCIWithCache_ClassInfo_, clinit$AbstractConstantGroup$BSCIWithCache, allocate$AbstractConstantGroup$BSCIWithCache);
	return class$;
}

$Class* AbstractConstantGroup$BSCIWithCache::class$ = nullptr;

		} // invoke
	} // lang
} // java