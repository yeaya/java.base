#include <java/util/zip/Inflater$InflaterZStreamRef.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/util/zip/Inflater.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Inflater = ::java::util::zip::Inflater;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace java {
	namespace util {
		namespace zip {

void Inflater$InflaterZStreamRef::init$($Inflater* owner, int64_t addr) {
	$set(this, cleanable, (owner != nullptr) ? $$nc($CleanerFactory::cleaner())->register$(owner, this) : ($Cleaner$Cleanable*)nullptr);
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
	$FieldInfo fieldInfos$$[] = {
		{"address", "J", nullptr, $PRIVATE, $field(Inflater$InflaterZStreamRef, address$)},
		{"cleanable", "Ljava/lang/ref/Cleaner$Cleanable;", nullptr, $PRIVATE | $FINAL, $field(Inflater$InflaterZStreamRef, cleanable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/zip/Inflater;J)V", nullptr, $PRIVATE, $method(Inflater$InflaterZStreamRef, init$, void, $Inflater*, int64_t)},
		{"address", "()J", nullptr, 0, $virtualMethod(Inflater$InflaterZStreamRef, address, int64_t)},
		{"clean", "()V", nullptr, 0, $virtualMethod(Inflater$InflaterZStreamRef, clean, void)},
		{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Inflater$InflaterZStreamRef, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.zip.Inflater$InflaterZStreamRef", "java.util.zip.Inflater", "InflaterZStreamRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.zip.Inflater$InflaterZStreamRef",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.zip.Inflater"
	};
	$loadClass(Inflater$InflaterZStreamRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Inflater$InflaterZStreamRef);
	});
	return class$;
}

$Class* Inflater$InflaterZStreamRef::class$ = nullptr;

		} // zip
	} // util
} // java