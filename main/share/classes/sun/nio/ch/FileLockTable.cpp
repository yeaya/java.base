#include <sun/nio/ch/FileLockTable.h>
#include <java/io/FileDescriptor.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/channels/OverlappingFileLockException.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/nio/ch/FileKey.h>
#include <sun/nio/ch/FileLockTable$FileLockReference.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Channel = ::java::nio::channels::Channel;
using $FileLock = ::java::nio::channels::FileLock;
using $OverlappingFileLockException = ::java::nio::channels::OverlappingFileLockException;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $FileKey = ::sun::nio::ch::FileKey;
using $FileLockTable$FileLockReference = ::sun::nio::ch::FileLockTable$FileLockReference;

namespace sun {
	namespace nio {
		namespace ch {

bool FileLockTable::$assertionsDisabled = false;
$ConcurrentHashMap* FileLockTable::lockMap = nullptr;
$ReferenceQueue* FileLockTable::queue = nullptr;

void FileLockTable::init$($Channel* channel, $FileDescriptor* fd) {
	$set(this, channel, channel);
	$set(this, fileKey, $FileKey::create(fd));
	$set(this, locks, $new($HashSet));
}

void FileLockTable::add($FileLock* fl) {
	$useLocalObjectStack();
	$var($List, list, $cast($List, $nc(FileLockTable::lockMap)->get(this->fileKey)));
	for (;;) {
		if (list == nullptr) {
			$assign(list, $new($ArrayList, 2));
			$var($List, prev, nullptr);
			$synchronized(list) {
				$assign(prev, $cast($List, $nc(FileLockTable::lockMap)->putIfAbsent(this->fileKey, list)));
				if (prev == nullptr) {
					list->add($$new($FileLockTable$FileLockReference, fl, FileLockTable::queue, this->fileKey));
					$nc(this->locks)->add(fl);
					break;
				}
			}
			$assign(list, prev);
		}
		$synchronized(list) {
			$var($List, current, $cast($List, $nc(FileLockTable::lockMap)->get(this->fileKey)));
			if (list == current) {
				int64_t var$0 = $nc(fl)->position();
				checkList(list, var$0, fl->size());
				list->add($$new($FileLockTable$FileLockReference, fl, FileLockTable::queue, this->fileKey));
				$nc(this->locks)->add(fl);
				break;
			}
			$assign(list, current);
		}
	}
	removeStaleEntries();
}

void FileLockTable::removeKeyIfEmpty($FileKey* fk, $List* list) {
	if (!FileLockTable::$assertionsDisabled && !$Thread::holdsLock(list)) {
		$throwNew($AssertionError);
	}
	if (!FileLockTable::$assertionsDisabled && !$equals($nc(FileLockTable::lockMap)->get(fk), list)) {
		$throwNew($AssertionError);
	}
	if ($nc(list)->isEmpty()) {
		$nc(FileLockTable::lockMap)->remove(fk);
	}
}

void FileLockTable::remove($FileLock* fl) {
	$useLocalObjectStack();
	if (!FileLockTable::$assertionsDisabled && !(fl != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($List, list, $cast($List, $nc(FileLockTable::lockMap)->get(this->fileKey)));
	if (list == nullptr) {
		return;
	}
	$synchronized(list) {
		int32_t index = 0;
		while (index < list->size()) {
			$var($FileLockTable$FileLockReference, ref, $cast($FileLockTable$FileLockReference, list->get(index)));
			$var($FileLock, lock, $cast($FileLock, $nc(ref)->get()));
			if (lock == fl) {
				if (!FileLockTable::$assertionsDisabled && !((lock != nullptr) && (lock->acquiredBy() == this->channel))) {
					$throwNew($AssertionError);
				}
				ref->clear();
				list->remove(index);
				$nc(this->locks)->remove(fl);
				break;
			}
			++index;
		}
	}
}

$List* FileLockTable::removeAll() {
	$useLocalObjectStack();
	$var($List, result, $new($ArrayList));
	$var($List, list, $cast($List, $nc(FileLockTable::lockMap)->get(this->fileKey)));
	if (list != nullptr) {
		$synchronized(list) {
			int32_t index = 0;
			while (index < list->size()) {
				$var($FileLockTable$FileLockReference, ref, $cast($FileLockTable$FileLockReference, list->get(index)));
				$var($FileLock, lock, $cast($FileLock, $nc(ref)->get()));
				if (lock != nullptr && lock->acquiredBy() == this->channel) {
					ref->clear();
					list->remove(index);
					result->add(lock);
				} else {
					++index;
				}
			}
			removeKeyIfEmpty(this->fileKey, list);
			$nc(this->locks)->clear();
		}
	}
	return result;
}

void FileLockTable::replace($FileLock* fromLock, $FileLock* toLock) {
	$useLocalObjectStack();
	$var($List, list, $cast($List, $nc(FileLockTable::lockMap)->get(this->fileKey)));
	if (!FileLockTable::$assertionsDisabled && !(list != nullptr)) {
		$throwNew($AssertionError);
	}
	$synchronized(list) {
		for (int32_t index = 0; index < list->size(); ++index) {
			$var($FileLockTable$FileLockReference, ref, $cast($FileLockTable$FileLockReference, list->get(index)));
			$var($FileLock, lock, $cast($FileLock, $nc(ref)->get()));
			if (lock == fromLock) {
				ref->clear();
				list->set(index, $$new($FileLockTable$FileLockReference, toLock, FileLockTable::queue, this->fileKey));
				$nc(this->locks)->remove(fromLock);
				this->locks->add(toLock);
				break;
			}
		}
	}
}

void FileLockTable::checkList($List* list, int64_t position, int64_t size) {
	$useLocalObjectStack();
	if (!FileLockTable::$assertionsDisabled && !$Thread::holdsLock(list)) {
		$throwNew($AssertionError);
	}
	{
		$var($Iterator, i$, $nc(list)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FileLockTable$FileLockReference, ref, $cast($FileLockTable$FileLockReference, i$->next()));
			{
				$var($FileLock, fl, $cast($FileLock, $nc(ref)->get()));
				if (fl != nullptr && fl->overlaps(position, size)) {
					$throwNew($OverlappingFileLockException);
				}
			}
		}
	}
}

void FileLockTable::removeStaleEntries() {
	$useLocalObjectStack();
	$var($FileLockTable$FileLockReference, ref, nullptr);
	while (($assign(ref, $cast($FileLockTable$FileLockReference, $nc(FileLockTable::queue)->poll()))) != nullptr) {
		$var($FileKey, fk, $nc(ref)->fileKey());
		$var($List, list, $cast($List, $nc(FileLockTable::lockMap)->get(fk)));
		if (list != nullptr) {
			$synchronized(list) {
				list->remove(ref);
				removeKeyIfEmpty(fk, list);
			}
		}
	}
}

void FileLockTable::clinit$($Class* clazz) {
	FileLockTable::$assertionsDisabled = !FileLockTable::class$->desiredAssertionStatus();
	$assignStatic(FileLockTable::lockMap, $new($ConcurrentHashMap));
	$assignStatic(FileLockTable::queue, $new($ReferenceQueue));
}

FileLockTable::FileLockTable() {
}

$Class* FileLockTable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FileLockTable, $assertionsDisabled)},
		{"lockMap", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Lsun/nio/ch/FileKey;Ljava/util/List<Lsun/nio/ch/FileLockTable$FileLockReference;>;>;", $PRIVATE | $STATIC, $staticField(FileLockTable, lockMap)},
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/nio/channels/FileLock;>;", $PRIVATE | $STATIC, $staticField(FileLockTable, queue)},
		{"channel", "Ljava/nio/channels/Channel;", nullptr, $PRIVATE | $FINAL, $field(FileLockTable, channel)},
		{"fileKey", "Lsun/nio/ch/FileKey;", nullptr, $PRIVATE | $FINAL, $field(FileLockTable, fileKey)},
		{"locks", "Ljava/util/Set;", "Ljava/util/Set<Ljava/nio/channels/FileLock;>;", $PRIVATE | $FINAL, $field(FileLockTable, locks)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/Channel;Ljava/io/FileDescriptor;)V", nullptr, 0, $method(FileLockTable, init$, void, $Channel*, $FileDescriptor*), "java.io.IOException"},
		{"add", "(Ljava/nio/channels/FileLock;)V", nullptr, 0, $virtualMethod(FileLockTable, add, void, $FileLock*), "java.nio.channels.OverlappingFileLockException"},
		{"checkList", "(Ljava/util/List;JJ)V", "(Ljava/util/List<Lsun/nio/ch/FileLockTable$FileLockReference;>;JJ)V", $PRIVATE, $method(FileLockTable, checkList, void, $List*, int64_t, int64_t), "java.nio.channels.OverlappingFileLockException"},
		{"remove", "(Ljava/nio/channels/FileLock;)V", nullptr, 0, $virtualMethod(FileLockTable, remove, void, $FileLock*)},
		{"removeAll", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/channels/FileLock;>;", 0, $virtualMethod(FileLockTable, removeAll, $List*)},
		{"removeKeyIfEmpty", "(Lsun/nio/ch/FileKey;Ljava/util/List;)V", "(Lsun/nio/ch/FileKey;Ljava/util/List<Lsun/nio/ch/FileLockTable$FileLockReference;>;)V", $PRIVATE, $method(FileLockTable, removeKeyIfEmpty, void, $FileKey*, $List*)},
		{"removeStaleEntries", "()V", nullptr, $PRIVATE, $method(FileLockTable, removeStaleEntries, void)},
		{"replace", "(Ljava/nio/channels/FileLock;Ljava/nio/channels/FileLock;)V", nullptr, 0, $virtualMethod(FileLockTable, replace, void, $FileLock*, $FileLock*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.FileLockTable$FileLockReference", "sun.nio.ch.FileLockTable", "FileLockReference", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.FileLockTable",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.ch.FileLockTable$FileLockReference"
	};
	$loadClass(FileLockTable, name, initialize, &classInfo$$, FileLockTable::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileLockTable);
	});
	return class$;
}

$Class* FileLockTable::class$ = nullptr;

		} // ch
	} // nio
} // sun