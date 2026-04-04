#include <sun/security/util/AbstractAlgorithmConstraints.h>
#include <java/security/AccessController.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <sun/security/util/AbstractAlgorithmConstraints$1.h>
#include <sun/security/util/AlgorithmDecomposer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $AbstractAlgorithmConstraints$1 = ::sun::security::util::AbstractAlgorithmConstraints$1;
using $AlgorithmDecomposer = ::sun::security::util::AlgorithmDecomposer;

namespace sun {
	namespace security {
		namespace util {

void AbstractAlgorithmConstraints::init$($AlgorithmDecomposer* decomposer) {
	$set(this, decomposer, decomposer);
}

$List* AbstractAlgorithmConstraints::getAlgorithms($String* propertyName) {
	$init(AbstractAlgorithmConstraints);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, property, $cast($String, $AccessController::doPrivileged($$new($AbstractAlgorithmConstraints$1, propertyName))));
	$var($StringArray, algorithmsInProperty, nullptr);
	if (property != nullptr && !property->isEmpty()) {
		bool var$1 = property->length() >= 2;
		bool var$0 = var$1 && property->charAt(0) == u'\"';
		if (var$0 && property->charAt(property->length() - 1) == u'\"') {
			$assign(property, property->substring(1, property->length() - 1));
		}
		$assign(algorithmsInProperty, property->split(","_s));
		for (int32_t i = 0; i < algorithmsInProperty->length; ++i) {
			algorithmsInProperty->set(i, $($nc(algorithmsInProperty->get(i))->trim()));
		}
	}
	if (algorithmsInProperty == nullptr) {
		return $Collections::emptyList();
	}
	return $new($ArrayList, $($Arrays::asList(algorithmsInProperty)));
}

bool AbstractAlgorithmConstraints::checkAlgorithm($List* algorithms, $String* algorithm, $AlgorithmDecomposer* decomposer) {
	$init(AbstractAlgorithmConstraints);
	$useLocalObjectStack();
	if (algorithm == nullptr || algorithm->isEmpty()) {
		$throwNew($IllegalArgumentException, "No algorithm name specified"_s);
	}
	$var($Set, elements, nullptr);
	{
		$var($Iterator, i$, $nc(algorithms)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, item, $cast($String, i$->next()));
			{
				if (item == nullptr || item->isEmpty()) {
					continue;
				}
				if ($nc(item)->equalsIgnoreCase(algorithm)) {
					return false;
				}
				if (elements == nullptr) {
					$assign(elements, $nc(decomposer)->decompose(algorithm));
				}
				{
					$var($Iterator, i$, $nc(elements)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, element, $cast($String, i$->next()));
						if (item->equalsIgnoreCase(element)) {
							return false;
						}
					}
				}
			}
		}
	}
	return true;
}

AbstractAlgorithmConstraints::AbstractAlgorithmConstraints() {
}

$Class* AbstractAlgorithmConstraints::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"decomposer", "Lsun/security/util/AlgorithmDecomposer;", nullptr, $PROTECTED | $FINAL, $field(AbstractAlgorithmConstraints, decomposer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/util/AlgorithmDecomposer;)V", nullptr, $PROTECTED, $method(AbstractAlgorithmConstraints, init$, void, $AlgorithmDecomposer*)},
		{"checkAlgorithm", "(Ljava/util/List;Ljava/lang/String;Lsun/security/util/AlgorithmDecomposer;)Z", "(Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;Lsun/security/util/AlgorithmDecomposer;)Z", $STATIC, $staticMethod(AbstractAlgorithmConstraints, checkAlgorithm, bool, $List*, $String*, $AlgorithmDecomposer*)},
		{"getAlgorithms", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $STATIC, $staticMethod(AbstractAlgorithmConstraints, getAlgorithms, $List*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.AbstractAlgorithmConstraints$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.security.util.AbstractAlgorithmConstraints",
		"java.lang.Object",
		"java.security.AlgorithmConstraints",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.util.AbstractAlgorithmConstraints$1"
	};
	$loadClass(AbstractAlgorithmConstraints, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractAlgorithmConstraints);
	});
	return class$;
}

$Class* AbstractAlgorithmConstraints::class$ = nullptr;

		} // util
	} // security
} // sun