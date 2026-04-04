#include <java/util/zip/Deflater$DeflaterZStreamRef.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/util/zip/Deflater.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Deflater = ::java::util::zip::Deflater;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace java {
	namespace util {
		namespace zip {

void Deflater$DeflaterZStreamRef::init$($Deflater* owner, int64_t addr) {
	$set(this, cleanable, (owner != nullptr) ? $$nc($CleanerFactory::cleaner())->register$(owner, this) : ($Cleaner$Cleanable*)nullptr);
	this->address$ = addr;
}

int64_t Deflater$DeflaterZStreamRef::address() {
	return this->address$;
}

void Deflater$DeflaterZStreamRef::clean() {
	$nc(this->cleanable)->clean();
}

void Deflater$DeflaterZStreamRef::run() {
	$synchronized(this) {
		int64_t addr = this->address$;
		this->address$ = 0;
		if (addr != 0) {
			$Deflater::end(addr);
		}
	}
}

Deflater$DeflaterZStreamRef::Deflater$DeflaterZStreamRef() {
}

$Class* Deflater$DeflaterZStreamRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"address", "J", nullptr, $PRIVATE, $field(Deflater$DeflaterZStreamRef, address$)},
		{"cleanable", "Ljava/lang/ref/Cleaner$Cleanable;", nullptr, $PRIVATE | $FINAL, $field(Deflater$DeflaterZStreamRef, cleanable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/zip/Deflater;J)V", nullptr, $PRIVATE, $method(Deflater$DeflaterZStreamRef, init$, void, $Deflater*, int64_t)},
		{"address", "()J", nullptr, 0, $virtualMethod(Deflater$DeflaterZStreamRef, address, int64_t)},
		{"clean", "()V", nullptr, 0, $virtualMethod(Deflater$DeflaterZStreamRef, clean, void)},
		{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Deflater$DeflaterZStreamRef, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.zip.Deflater$DeflaterZStreamRef", "java.util.zip.Deflater", "DeflaterZStreamRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.zip.Deflater$DeflaterZStreamRef",
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
		"java.util.zip.Deflater"
	};
	$loadClass(Deflater$DeflaterZStreamRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Deflater$DeflaterZStreamRef);
	});
	return class$;
}

$Class* Deflater$DeflaterZStreamRef::class$ = nullptr;

		} // zip
	} // util
} // java