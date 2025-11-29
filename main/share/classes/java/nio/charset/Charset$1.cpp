#include <java/nio/charset/Charset$1.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CharsetProvider = ::java::nio::charset::spi::CharsetProvider;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _Charset$1_FieldInfo_[] = {
	{"cl", "Ljava/lang/ClassLoader;", nullptr, 0, $field(Charset$1, cl)},
	{"sl", "Ljava/util/ServiceLoader;", "Ljava/util/ServiceLoader<Ljava/nio/charset/spi/CharsetProvider;>;", 0, $field(Charset$1, sl)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/nio/charset/spi/CharsetProvider;>;", 0, $field(Charset$1, i)},
	{"next", "Ljava/nio/charset/spi/CharsetProvider;", nullptr, 0, $field(Charset$1, next$)},
	{}
};

$MethodInfo _Charset$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Charset$1::*)()>(&Charset$1::init$))},
	{"getNext", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Charset$1::*)()>(&Charset$1::getNext))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/charset/spi/CharsetProvider;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Charset$1_EnclosingMethodInfo_ = {
	"java.nio.charset.Charset",
	"providers",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _Charset$1_InnerClassesInfo_[] = {
	{"java.nio.charset.Charset$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Charset$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.charset.Charset$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Charset$1_FieldInfo_,
	_Charset$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/charset/spi/CharsetProvider;>;",
	&_Charset$1_EnclosingMethodInfo_,
	_Charset$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.charset.Charset"
};

$Object* allocate$Charset$1($Class* clazz) {
	return $of($alloc(Charset$1));
}

void Charset$1::init$() {
	$beforeCallerSensitive();
	$set(this, cl, $ClassLoader::getSystemClassLoader());
	$load($CharsetProvider);
	$set(this, sl, $ServiceLoader::load($CharsetProvider::class$, this->cl));
	$set(this, i, $nc(this->sl)->iterator());
	$set(this, next$, nullptr);
}

bool Charset$1::getNext() {
	$useLocalCurrentObjectStackCache();
	while (this->next$ == nullptr) {
		try {
			if (!$nc(this->i)->hasNext()) {
				return false;
			}
			$set(this, next$, $cast($CharsetProvider, $nc(this->i)->next()));
		} catch ($ServiceConfigurationError& sce) {
			if ($instanceOf($SecurityException, $(sce->getCause()))) {
				continue;
			}
			$throw(sce);
		}
	}
	return true;
}

bool Charset$1::hasNext() {
	return getNext();
}

$Object* Charset$1::next() {
	if (!getNext()) {
		$throwNew($NoSuchElementException);
	}
	$var($CharsetProvider, n, this->next$);
	$set(this, next$, nullptr);
	return $of(n);
}

void Charset$1::remove() {
	$throwNew($UnsupportedOperationException);
}

Charset$1::Charset$1() {
}

$Class* Charset$1::load$($String* name, bool initialize) {
	$loadClass(Charset$1, name, initialize, &_Charset$1_ClassInfo_, allocate$Charset$1);
	return class$;
}

$Class* Charset$1::class$ = nullptr;

		} // charset
	} // nio
} // java