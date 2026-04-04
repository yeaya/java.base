#include <ICCBasher.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE_ORDER
#undef CHAR_VALUE_LIMIT
#undef STRING_SIZE
#undef TEST_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Collections = ::java::util::Collections;
using $LinkedList = ::java::util::LinkedList;
using $Random = ::java::util::Random;

void ICCBasher::init$() {
}

void ICCBasher::main($StringArray* args) {
	$useLocalObjectStack();
	$var($LinkedList, L1, $new($LinkedList));
	$var($LinkedList, L2, $new($LinkedList));
	$var($LinkedList, L3, $new($LinkedList));
	$var($LinkedList, L4, $new($LinkedList));
	$var($Random, generator, $new($Random));
	int32_t achar = 0;
	$var($StringBuffer, entryBuffer, $new($StringBuffer, 10));
	$var($String, snippet, nullptr);
	for (int32_t x = 0; x < ICCBasher::TEST_SIZE * 2; ++x) {
		for (int32_t y = 0; y < ICCBasher::STRING_SIZE; ++y) {
			achar = generator->nextInt(ICCBasher::CHAR_VALUE_LIMIT);
			char16_t test = (char16_t)(achar);
			entryBuffer->append(test);
		}
		$assign(snippet, entryBuffer->toString());
		snippet->toLowerCase();
		if (x < ICCBasher::TEST_SIZE) {
			L1->add(snippet);
		} else {
			L2->add(snippet);
		}
	}
	for (int32_t x = 0; x < ICCBasher::TEST_SIZE; ++x) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($$cast($String, L1->get(x)));
		var$0->append($$cast($String, L2->get(x)));
		$var($String, entry, $str(var$0));
		L3->add(entry);
	}
	for (int32_t x = 0; x < ICCBasher::TEST_SIZE; ++x) {
		achar = generator->nextInt();
		if (achar > 0) {
			$var($String, mod, $cast($String, L1->get(x)));
			$assign(mod, $nc(mod)->toUpperCase());
			L1->set(x, mod);
		}
		achar = generator->nextInt();
		if (achar > 0) {
			$var($String, mod, $cast($String, L2->get(x)));
			$assign(mod, $nc(mod)->toUpperCase());
			L2->set(x, mod);
		}
	}
	for (int32_t x = 0; x < ICCBasher::TEST_SIZE; ++x) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append($$cast($String, L1->get(x)));
		var$1->append($$cast($String, L2->get(x)));
		$var($String, entry, $str(var$1));
		L4->add(entry);
	}
	$Collections::sort(L3, $String::CASE_INSENSITIVE_ORDER);
	$Collections::sort(L4, $String::CASE_INSENSITIVE_ORDER);
	for (int32_t x = 0; x < ICCBasher::TEST_SIZE; ++x) {
		$var($String, one, $cast($String, L3->get(x)));
		$var($String, two, $cast($String, L4->get(x)));
		if (!$nc(one)->equalsIgnoreCase(two)) {
			$throwNew($RuntimeException, "Case Insensitive Sort Failure."_s);
		}
	}
}

ICCBasher::ICCBasher() {
}

$Class* ICCBasher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEST_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ICCBasher, TEST_SIZE)},
		{"STRING_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ICCBasher, STRING_SIZE)},
		{"CHAR_VALUE_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(ICCBasher, CHAR_VALUE_LIMIT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ICCBasher, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ICCBasher, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ICCBasher",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ICCBasher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ICCBasher);
	});
	return class$;
}

$Class* ICCBasher::class$ = nullptr;