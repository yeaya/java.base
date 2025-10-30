#include <jdk/internal/loader/AbstractClassLoaderValue$Memoizer.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/reflect/UndeclaredThrowableException.h>
#include <java/util/Objects.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/loader/AbstractClassLoaderValue$Memoizer$RecursiveInvocationException.h>
#include <jdk/internal/loader/AbstractClassLoaderValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UndeclaredThrowableException = ::java::lang::reflect::UndeclaredThrowableException;
using $Objects = ::java::util::Objects;
using $BiFunction = ::java::util::function::BiFunction;
using $Supplier = ::java::util::function::Supplier;
using $AbstractClassLoaderValue = ::jdk::internal::loader::AbstractClassLoaderValue;
using $AbstractClassLoaderValue$Memoizer$RecursiveInvocationException = ::jdk::internal::loader::AbstractClassLoaderValue$Memoizer$RecursiveInvocationException;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _AbstractClassLoaderValue$Memoizer_FieldInfo_[] = {
	{"cl", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(AbstractClassLoaderValue$Memoizer, cl)},
	{"clv", "Ljdk/internal/loader/AbstractClassLoaderValue;", "TCLV;", $PRIVATE | $FINAL, $field(AbstractClassLoaderValue$Memoizer, clv)},
	{"mappingFunction", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<-Ljava/lang/ClassLoader;-TCLV;+TV;>;", $PRIVATE | $FINAL, $field(AbstractClassLoaderValue$Memoizer, mappingFunction)},
	{"v", "Ljava/lang/Object;", "TV;", $PRIVATE | $VOLATILE, $field(AbstractClassLoaderValue$Memoizer, v)},
	{"t", "Ljava/lang/Throwable;", nullptr, $PRIVATE | $VOLATILE, $field(AbstractClassLoaderValue$Memoizer, t)},
	{"inCall", "Z", nullptr, $PRIVATE, $field(AbstractClassLoaderValue$Memoizer, inCall)},
	{}
};

$MethodInfo _AbstractClassLoaderValue$Memoizer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;Ljdk/internal/loader/AbstractClassLoaderValue;Ljava/util/function/BiFunction;)V", "(Ljava/lang/ClassLoader;TCLV;Ljava/util/function/BiFunction<-Ljava/lang/ClassLoader;-TCLV;+TV;>;)V", 0, $method(static_cast<void(AbstractClassLoaderValue$Memoizer::*)($ClassLoader*,$AbstractClassLoaderValue*,$BiFunction*)>(&AbstractClassLoaderValue$Memoizer::init$))},
	{"get", "()Ljava/lang/Object;", "()TV;", $PUBLIC, nullptr, "jdk.internal.loader.AbstractClassLoaderValue$Memoizer$RecursiveInvocationException"},
	{}
};

$InnerClassInfo _AbstractClassLoaderValue$Memoizer_InnerClassesInfo_[] = {
	{"jdk.internal.loader.AbstractClassLoaderValue$Memoizer", "jdk.internal.loader.AbstractClassLoaderValue", "Memoizer", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.loader.AbstractClassLoaderValue$Memoizer$RecursiveInvocationException", "jdk.internal.loader.AbstractClassLoaderValue$Memoizer", "RecursiveInvocationException", $STATIC},
	{}
};

$ClassInfo _AbstractClassLoaderValue$Memoizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.loader.AbstractClassLoaderValue$Memoizer",
	"java.lang.Object",
	"java.util.function.Supplier",
	_AbstractClassLoaderValue$Memoizer_FieldInfo_,
	_AbstractClassLoaderValue$Memoizer_MethodInfo_,
	"<CLV:Ljdk/internal/loader/AbstractClassLoaderValue<TCLV;TV;>;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Supplier<TV;>;",
	nullptr,
	_AbstractClassLoaderValue$Memoizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.AbstractClassLoaderValue"
};

$Object* allocate$AbstractClassLoaderValue$Memoizer($Class* clazz) {
	return $of($alloc(AbstractClassLoaderValue$Memoizer));
}

void AbstractClassLoaderValue$Memoizer::init$($ClassLoader* cl, $AbstractClassLoaderValue* clv, $BiFunction* mappingFunction) {
	$set(this, cl, cl);
	$set(this, clv, clv);
	$set(this, mappingFunction, mappingFunction);
}

$Object* AbstractClassLoaderValue$Memoizer::get() {
	$useLocalCurrentObjectStackCache();
	$var($Object, v, this->v);
	if (v != nullptr) {
		return $of(v);
	}
	$var($Throwable, t, this->t);
	if (t == nullptr) {
		$synchronized(this) {
			if (($assign(v, this->v)) == nullptr && ($assign(t, this->t)) == nullptr) {
				if (this->inCall) {
					$throwNew($AbstractClassLoaderValue$Memoizer$RecursiveInvocationException);
				}
				this->inCall = true;
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$set(this, v, ($assign(v, $Objects::requireNonNull($($nc(this->mappingFunction)->apply(this->cl, this->clv))))));
						} catch ($Throwable& x) {
							$set(this, t, ($assign(t, x)));
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						this->inCall = false;
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
	if (v != nullptr) {
		return $of(v);
	}
	if ($instanceOf($Error, t)) {
		$throw($cast($Error, t));
	} else if ($instanceOf($RuntimeException, t)) {
		$throw($cast($RuntimeException, t));
	} else {
		$throwNew($UndeclaredThrowableException, t);
	}
}

AbstractClassLoaderValue$Memoizer::AbstractClassLoaderValue$Memoizer() {
}

$Class* AbstractClassLoaderValue$Memoizer::load$($String* name, bool initialize) {
	$loadClass(AbstractClassLoaderValue$Memoizer, name, initialize, &_AbstractClassLoaderValue$Memoizer_ClassInfo_, allocate$AbstractClassLoaderValue$Memoizer);
	return class$;
}

$Class* AbstractClassLoaderValue$Memoizer::class$ = nullptr;

		} // loader
	} // internal
} // jdk