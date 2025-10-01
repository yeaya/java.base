#include <java/util/zip/Inflater$InflaterZStreamRef.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/zip/Inflater.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Inflater = ::java::util::zip::Inflater;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _Inflater$InflaterZStreamRef_FieldInfo_[] = {
	{"address", "J", nullptr, $PRIVATE, $field(Inflater$InflaterZStreamRef, address$)},
	{"cleanable", "Ljava/lang/ref/Cleaner$Cleanable;", nullptr, $PRIVATE | $FINAL, $field(Inflater$InflaterZStreamRef, cleanable)},
	{}
};

$MethodInfo _Inflater$InflaterZStreamRef_MethodInfo_[] = {
	{"<init>", "(Ljava/util/zip/Inflater;J)V", nullptr, $PRIVATE, $method(static_cast<void(Inflater$InflaterZStreamRef::*)($Inflater*,int64_t)>(&Inflater$InflaterZStreamRef::init$))},
	{"address", "()J", nullptr, 0},
	{"clean", "()V", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _Inflater$InflaterZStreamRef_InnerClassesInfo_[] = {
	{"java.util.zip.Inflater$InflaterZStreamRef", "java.util.zip.Inflater", "InflaterZStreamRef", $STATIC},
	{}
};

$ClassInfo _Inflater$InflaterZStreamRef_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.Inflater$InflaterZStreamRef",
	"java.lang.Object",
	"java.lang.Runnable",
	_Inflater$InflaterZStreamRef_FieldInfo_,
	_Inflater$InflaterZStreamRef_MethodInfo_,
	nullptr,
	nullptr,
	_Inflater$InflaterZStreamRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.Inflater"
};

$Object* allocate$Inflater$InflaterZStreamRef($Class* clazz) {
	return $of($alloc(Inflater$InflaterZStreamRef));
}

void Inflater$InflaterZStreamRef::init$($Inflater* owner, int64_t addr) {
	$set(this, cleanable, (owner != nullptr) ? $nc($($CleanerFactory::cleaner()))->register$(owner, this) : ($Cleaner$Cleanable*)nullptr);
	this->address$ = addr;
}

int64_t Inflater$InflaterZStreamRef::address() {
	return this->address$;
}

void Inflater$InflaterZStreamRef::clean() {
	$nc(this->cleanable)->clean();
}

void Inflater$InflaterZStreamRef::run() {
	$synchronized(this) {
		int64_t addr = this->address$;
		this->address$ = 0;
		if (addr != 0) {
			$Inflater::end(addr);
		}
	}
}

Inflater$InflaterZStreamRef::Inflater$InflaterZStreamRef() {
}

$Class* Inflater$InflaterZStreamRef::load$($String* name, bool initialize) {
	$loadClass(Inflater$InflaterZStreamRef, name, initialize, &_Inflater$InflaterZStreamRef_ClassInfo_, allocate$Inflater$InflaterZStreamRef);
	return class$;
}

$Class* Inflater$InflaterZStreamRef::class$ = nullptr;

		} // zip
	} // util
} // java