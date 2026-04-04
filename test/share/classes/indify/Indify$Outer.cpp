#include <indify/Indify$Outer.h>
#include <indify/Indify$Attr.h>
#include <indify/Indify$ClassFile.h>
#include <indify/Indify$Inner.h>
#include <indify/Indify$Pool.h>
#include <indify/Indify.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Indify$Attr = ::indify::Indify$Attr;
using $Indify$ClassFile = ::indify::Indify$ClassFile;
using $Indify$Inner = ::indify::Indify$Inner;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace indify {

void Indify$Outer::init$() {
}

void Indify$Outer::linkInners() {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc(inners())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Indify$Inner, i, $cast($Indify$Inner, i$->next()));
		{
			$nc(i)->linkOuter(this);
			if ($instanceOf(Indify$Outer, i)) {
				$cast(Indify$Outer, i)->linkInners();
			}
		}
	}
}

Indify$Outer* Indify$Outer::outer($Class* c) {
	$var(Indify$Outer, walk, this);
	for (;; $assign(walk, $cast($Indify$Inner, walk)->outer())) {
		if ($nc(c)->isInstance(walk)) {
			return $cast(Indify$Outer, c->cast(walk));
		}
	}
}

$Indify$Attr* Indify$Outer::findAttr($String* name) {
	$load($Indify$ClassFile);
	return findAttr($nc($nc(($$cast($Indify$ClassFile, outer($Indify$ClassFile::class$))))->pool)->stringIndex(name, false));
}

$Indify$Attr* Indify$Outer::findAttr(int32_t name) {
	$useLocalObjectStack();
	if (name == 0) {
		return nullptr;
	}
	{
		$var($Iterator, i$, $$nc(attrs())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Indify$Attr, a, $cast($Indify$Attr, i$->next()));
			if ($nc(a)->name == name) {
				return a;
			}
		}
	}
	return nullptr;
}

Indify$Outer::Indify$Outer() {
}

$Class* Indify$Outer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Indify$Outer, init$, void)},
		{"attrs", "()Ljava/util/List;", "()Ljava/util/List<Lindify/Indify$Attr;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Indify$Outer, attrs, $List*)},
		{"findAttr", "(Ljava/lang/String;)Lindify/Indify$Attr;", nullptr, $PUBLIC, $virtualMethod(Indify$Outer, findAttr, $Indify$Attr*, $String*)},
		{"findAttr", "(I)Lindify/Indify$Attr;", nullptr, $PUBLIC, $virtualMethod(Indify$Outer, findAttr, $Indify$Attr*, int32_t)},
		{"inners", "()Ljava/util/List;", "()Ljava/util/List<+Lindify/Indify$Inner;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Indify$Outer, inners, $List*)},
		{"linkInners", "()V", nullptr, $PROTECTED, $virtualMethod(Indify$Outer, linkInners, void)},
		{"outer", "(Ljava/lang/Class;)Lindify/Indify$Outer;", "<T:Lindify/Indify$Outer;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(Indify$Outer, outer, Indify$Outer*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"indify.Indify$Outer", "indify.Indify", "Outer", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"indify.Indify$Outer",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"indify.Indify"
	};
	$loadClass(Indify$Outer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Indify$Outer);
	});
	return class$;
}

$Class* Indify$Outer::class$ = nullptr;

} // indify