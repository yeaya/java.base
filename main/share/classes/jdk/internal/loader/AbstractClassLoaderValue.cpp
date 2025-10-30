#include <jdk/internal/loader/AbstractClassLoaderValue.h>

#include <java/lang/ClassLoader.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap$KeySetView.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/loader/AbstractClassLoaderValue$Memoizer$RecursiveInvocationException.h>
#include <jdk/internal/loader/AbstractClassLoaderValue$Memoizer.h>
#include <jdk/internal/loader/AbstractClassLoaderValue$Sub.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jcpp.h>

#undef JLA

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Iterator = ::java::util::Iterator;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$KeySetView = ::java::util::concurrent::ConcurrentHashMap$KeySetView;
using $BiFunction = ::java::util::function::BiFunction;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $AbstractClassLoaderValue$Memoizer = ::jdk::internal::loader::AbstractClassLoaderValue$Memoizer;
using $AbstractClassLoaderValue$Memoizer$RecursiveInvocationException = ::jdk::internal::loader::AbstractClassLoaderValue$Memoizer$RecursiveInvocationException;
using $AbstractClassLoaderValue$Sub = ::jdk::internal::loader::AbstractClassLoaderValue$Sub;
using $BootLoader = ::jdk::internal::loader::BootLoader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _AbstractClassLoaderValue_FieldInfo_[] = {
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractClassLoaderValue, JLA)},
	{}
};

$MethodInfo _AbstractClassLoaderValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AbstractClassLoaderValue::*)()>(&AbstractClassLoaderValue::init$))},
	{"computeIfAbsent", "(Ljava/lang/ClassLoader;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(Ljava/lang/ClassLoader;Ljava/util/function/BiFunction<-Ljava/lang/ClassLoader;-TCLV;+TV;>;)TV;", $PUBLIC, nullptr, "java.lang.IllegalStateException"},
	{"extractValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PRIVATE, $method(static_cast<$Object*(AbstractClassLoaderValue::*)(Object$*)>(&AbstractClassLoaderValue::extractValue))},
	{"get", "(Ljava/lang/ClassLoader;)Ljava/lang/Object;", "(Ljava/lang/ClassLoader;)TV;", $PUBLIC},
	{"isEqualOrDescendantOf", "(Ljdk/internal/loader/AbstractClassLoaderValue;)Z", "(Ljdk/internal/loader/AbstractClassLoaderValue<*TV;>;)Z", $PUBLIC | $ABSTRACT},
	{"key", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"map", "(Ljava/lang/ClassLoader;)Ljava/util/concurrent/ConcurrentHashMap;", "<CLV:Ljdk/internal/loader/AbstractClassLoaderValue<TCLV;*>;>(Ljava/lang/ClassLoader;)Ljava/util/concurrent/ConcurrentHashMap<TCLV;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $method(static_cast<$ConcurrentHashMap*(*)($ClassLoader*)>(&AbstractClassLoaderValue::map))},
	{"putIfAbsent", "(Ljava/lang/ClassLoader;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/ClassLoader;TV;)TV;", $PUBLIC},
	{"remove", "(Ljava/lang/ClassLoader;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC},
	{"sub", "(Ljava/lang/Object;)Ljdk/internal/loader/AbstractClassLoaderValue$Sub;", "<K:Ljava/lang/Object;>(TK;)Ljdk/internal/loader/AbstractClassLoaderValue<TCLV;TV;>.Sub<TK;>;", $PUBLIC},
	{}
};

$InnerClassInfo _AbstractClassLoaderValue_InnerClassesInfo_[] = {
	{"jdk.internal.loader.AbstractClassLoaderValue$Sub", "jdk.internal.loader.AbstractClassLoaderValue", "Sub", $PUBLIC | $FINAL},
	{"jdk.internal.loader.AbstractClassLoaderValue$Memoizer", "jdk.internal.loader.AbstractClassLoaderValue", "Memoizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AbstractClassLoaderValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.loader.AbstractClassLoaderValue",
	"java.lang.Object",
	nullptr,
	_AbstractClassLoaderValue_FieldInfo_,
	_AbstractClassLoaderValue_MethodInfo_,
	"<CLV:Ljdk/internal/loader/AbstractClassLoaderValue<TCLV;TV;>;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AbstractClassLoaderValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.loader.AbstractClassLoaderValue$Sub,jdk.internal.loader.AbstractClassLoaderValue$Memoizer,jdk.internal.loader.AbstractClassLoaderValue$Memoizer$RecursiveInvocationException"
};

$Object* allocate$AbstractClassLoaderValue($Class* clazz) {
	return $of($alloc(AbstractClassLoaderValue));
}

$JavaLangAccess* AbstractClassLoaderValue::JLA = nullptr;

void AbstractClassLoaderValue::init$() {
}

$AbstractClassLoaderValue$Sub* AbstractClassLoaderValue::sub(Object$* key) {
	return $new($AbstractClassLoaderValue$Sub, this, key);
}

$Object* AbstractClassLoaderValue::get($ClassLoader* cl) {
	$useLocalCurrentObjectStackCache();
	$var($Object, val, $nc($(AbstractClassLoaderValue::map(cl)))->get(this));
	try {
		return $of(extractValue(val));
	} catch ($AbstractClassLoaderValue$Memoizer$RecursiveInvocationException& e) {
		$throw(e);
	} catch ($Throwable& t) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$Object* AbstractClassLoaderValue::putIfAbsent($ClassLoader* cl, Object$* v) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap, map, AbstractClassLoaderValue::map(cl));
	$var(AbstractClassLoaderValue, clv, this);
	while (true) {
		try {
			$var($Object, val, $nc(map)->putIfAbsent(clv, v));
			return $of(extractValue(val));
		} catch ($AbstractClassLoaderValue$Memoizer$RecursiveInvocationException& e) {
			$throw(e);
		} catch ($Throwable& t) {
		}
	}
	$shouldNotReachHere();
}

bool AbstractClassLoaderValue::remove($ClassLoader* cl, Object$* v) {
	return $nc($(AbstractClassLoaderValue::map(cl)))->remove(this, v);
}

$Object* AbstractClassLoaderValue::computeIfAbsent($ClassLoader* cl, $BiFunction* mappingFunction) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap, map, AbstractClassLoaderValue::map(cl));
	$var(AbstractClassLoaderValue, clv, this);
	$var($AbstractClassLoaderValue$Memoizer, mv, nullptr);
	while (true) {
		$var($Object, val, (mv == nullptr) ? $nc(map)->get(clv) : map->putIfAbsent(clv, mv));
		if (val == nullptr) {
			if (mv == nullptr) {
				$assign(mv, $new($AbstractClassLoaderValue$Memoizer, cl, clv, mappingFunction));
				continue;
			}
			try {
				$var($Object, v, $nc(mv)->get());
				map->replace(clv, mv, v);
				return $of(v);
			} catch ($Throwable& t) {
				map->remove(clv, mv);
				$throw(t);
			}
		} else {
			try {
				return $of(extractValue(val));
			} catch ($AbstractClassLoaderValue$Memoizer$RecursiveInvocationException& e) {
				$throw(e);
			} catch ($Throwable& t) {
			}
		}
	}
	$shouldNotReachHere();
}

void AbstractClassLoaderValue::removeAll($ClassLoader* cl) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap, map, AbstractClassLoaderValue::map(cl));
	{
		$var($Iterator, i, $nc($($cast($ConcurrentHashMap$KeySetView, $nc(map)->keySet())))->iterator());
		for (; $nc(i)->hasNext();) {
			if ($nc(($cast(AbstractClassLoaderValue, $(i->next()))))->isEqualOrDescendantOf(this)) {
				i->remove();
			}
		}
	}
}

$ConcurrentHashMap* AbstractClassLoaderValue::map($ClassLoader* cl) {
	$init(AbstractClassLoaderValue);
	return (cl == nullptr ? $BootLoader::getClassLoaderValueMap() : $nc(AbstractClassLoaderValue::JLA)->createOrGetClassLoaderValueMap(cl));
}

$Object* AbstractClassLoaderValue::extractValue(Object$* memoizerOrValue) {
	if ($instanceOf($AbstractClassLoaderValue$Memoizer, memoizerOrValue)) {
		return $of($nc(($cast($AbstractClassLoaderValue$Memoizer, memoizerOrValue)))->get());
	} else {
		return $of(memoizerOrValue);
	}
}

void clinit$AbstractClassLoaderValue($Class* class$) {
	$assignStatic(AbstractClassLoaderValue::JLA, $SharedSecrets::getJavaLangAccess());
}

AbstractClassLoaderValue::AbstractClassLoaderValue() {
}

$Class* AbstractClassLoaderValue::load$($String* name, bool initialize) {
	$loadClass(AbstractClassLoaderValue, name, initialize, &_AbstractClassLoaderValue_ClassInfo_, clinit$AbstractClassLoaderValue, allocate$AbstractClassLoaderValue);
	return class$;
}

$Class* AbstractClassLoaderValue::class$ = nullptr;

		} // loader
	} // internal
} // jdk