#include <java/io/DeleteOnExitHook.h>
#include <java/io/DeleteOnExitHook$1.h>
#include <java/io/File.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $DeleteOnExitHook$1 = ::java::io::DeleteOnExitHook$1;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace io {

$LinkedHashSet* DeleteOnExitHook::files = nullptr;

void DeleteOnExitHook::init$() {
}

void DeleteOnExitHook::add($String* file) {
	$init(DeleteOnExitHook);
	$synchronized(class$) {
		if (DeleteOnExitHook::files == nullptr) {
			$throwNew($IllegalStateException, "Shutdown in progress"_s);
		}
		$nc(DeleteOnExitHook::files)->add(file);
	}
}

void DeleteOnExitHook::runHooks() {
	$init(DeleteOnExitHook);
	$useLocalObjectStack();
	$var($LinkedHashSet, theFiles, nullptr);
	$synchronized(DeleteOnExitHook::class$) {
		$assign(theFiles, DeleteOnExitHook::files);
		$assignStatic(DeleteOnExitHook::files, nullptr);
	}
	$var($ArrayList, toBeDeleted, $new($ArrayList, $cast($AbstractCollection, theFiles)));
	$Collections::reverse(toBeDeleted);
	{
		$var($Iterator, i$, toBeDeleted->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, filename, $cast($String, i$->next()));
			{
				($$new($File, filename))->delete$();
			}
		}
	}
}

void DeleteOnExitHook::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(DeleteOnExitHook::files, $new($LinkedHashSet));
	{
		$$nc($SharedSecrets::getJavaLangAccess())->registerShutdownHook(2, true, $$new($DeleteOnExitHook$1));
	}
}

DeleteOnExitHook::DeleteOnExitHook() {
}

$Class* DeleteOnExitHook::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"files", "Ljava/util/LinkedHashSet;", "Ljava/util/LinkedHashSet<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(DeleteOnExitHook, files)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DeleteOnExitHook, init$, void)},
		{"add", "(Ljava/lang/String;)V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(DeleteOnExitHook, add, void, $String*)},
		{"runHooks", "()V", nullptr, $STATIC, $staticMethod(DeleteOnExitHook, runHooks, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.DeleteOnExitHook$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.DeleteOnExitHook",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.io.DeleteOnExitHook$1"
	};
	$loadClass(DeleteOnExitHook, name, initialize, &classInfo$$, DeleteOnExitHook::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DeleteOnExitHook);
	});
	return class$;
}

$Class* DeleteOnExitHook::class$ = nullptr;

	} // io
} // java