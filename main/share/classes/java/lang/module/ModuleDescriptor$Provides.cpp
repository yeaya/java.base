#include <java/lang/module/ModuleDescriptor$Provides.h>
#include <java/lang/Math.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace module {

void ModuleDescriptor$Provides::init$($String* service, $List* providers) {
	$set(this, service$, service);
	$set(this, providers$, $List::copyOf(providers));
}

void ModuleDescriptor$Provides::init$($String* service, $List* providers, bool unused) {
	$set(this, service$, service);
	$set(this, providers$, providers);
}

$String* ModuleDescriptor$Provides::service() {
	return this->service$;
}

$List* ModuleDescriptor$Provides::providers() {
	return this->providers$;
}

int32_t ModuleDescriptor$Provides::compareTo(ModuleDescriptor$Provides* that) {
	$useLocalObjectStack();
	if (this == that) {
		return 0;
	}
	int32_t c = $nc(this->service$)->compareTo($nc(that)->service$);
	if (c != 0) {
		return c;
	}
	int32_t size1 = $nc(this->providers$)->size();
	int32_t size2 = $nc(that->providers$)->size();
	for (int32_t index = 0; index < $Math::min(size1, size2); ++index) {
		$var($String, e1, $cast($String, this->providers$->get(index)));
		$var($String, e2, $cast($String, that->providers$->get(index)));
		c = $nc(e1)->compareTo(e2);
		if (c != 0) {
			return c;
		}
	}
	if (size1 == size2) {
		return 0;
	} else {
		return (size1 > size2) ? 1 : -1;
	}
}

int32_t ModuleDescriptor$Provides::hashCode() {
	int32_t var$0 = $nc(this->service$)->hashCode() * 43;
	return var$0 + $nc(this->providers$)->hashCode();
}

bool ModuleDescriptor$Provides::equals(Object$* ob) {
	$var(ModuleDescriptor$Provides, other, nullptr);
	bool var$2 = $instanceOf(ModuleDescriptor$Provides, ob);
	if (var$2) {
		$assign(other, $cast(ModuleDescriptor$Provides, ob));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $Objects::equals(this->service$, $nc(other)->service$);
	return var$0 && $Objects::equals(this->providers$, other->providers$);
}

$String* ModuleDescriptor$Provides::toString() {
	return $str({this->service$, " with "_s, this->providers$});
}

int32_t ModuleDescriptor$Provides::compareTo(Object$* that) {
	return this->compareTo($cast(ModuleDescriptor$Provides, that));
}

ModuleDescriptor$Provides::ModuleDescriptor$Provides() {
}

$Class* ModuleDescriptor$Provides::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"service", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ModuleDescriptor$Provides, service$)},
		{"providers", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ModuleDescriptor$Provides, providers$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(ModuleDescriptor$Provides, init$, void, $String*, $List*)},
		{"<init>", "(Ljava/lang/String;Ljava/util/List;Z)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;Z)V", $PRIVATE, $method(ModuleDescriptor$Provides, init$, void, $String*, $List*, bool)},
		{"compareTo", "(Ljava/lang/module/ModuleDescriptor$Provides;)I", nullptr, $PUBLIC, $method(ModuleDescriptor$Provides, compareTo, int32_t, ModuleDescriptor$Provides*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ModuleDescriptor$Provides, compareTo, int32_t, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModuleDescriptor$Provides, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ModuleDescriptor$Provides, hashCode, int32_t)},
		{"providers", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(ModuleDescriptor$Provides, providers, $List*)},
		{"service", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(ModuleDescriptor$Provides, service, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModuleDescriptor$Provides, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.module.ModuleDescriptor$Provides", "java.lang.module.ModuleDescriptor", "Provides", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.module.ModuleDescriptor$Provides",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/lang/module/ModuleDescriptor$Provides;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.module.ModuleDescriptor"
	};
	$loadClass(ModuleDescriptor$Provides, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleDescriptor$Provides);
	});
	return class$;
}

$Class* ModuleDescriptor$Provides::class$ = nullptr;

		} // module
	} // lang
} // java