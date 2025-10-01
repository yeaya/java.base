/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

class Unix {
	friend class OS;

public:
	static void init(void);
	static size_t getDefaultStackSize();
	static size_t getInitialStackSize(size_t reqStackSize);
	static char* realpath(const char* filename, char* outbuf, size_t outbuflen);
	static address getPc(const ucontext_t* uc);
	static void setPc(ucontext_t* uc, address pc);
	static void toRtcAbstime(int64_t millis, timespec* abstime);

	// signals
	static bool initSignals();
	static bool handleSignal(int sig, siginfo_t* info, ucontext_t* uc, JavaThread* thread);
	static bool isIgnoredSig(int sig);
	static void initSigMask(OSThread* thread);
	static void deinitSigMask(OSThread* thread);
	static bool handleChained(int sig, siginfo_t* siginfo, ucontext_t* uc);
	static void unblockErrorSignals();

	static void saveStackObjectRegs(ucontext_t* uc, JavaThread* thread);
};

class ParkEvent : public ::java::lang::CoreObject {
public:
	ParkEvent();
	~ParkEvent();
	void park();
	int park(jlong millis);
	void unpark();
	void reset() {
		event = 0;
		nParked = 0;
	}

private:
	std::atomic_int event;
	std::atomic_int nParked;
	pthread_mutex_t mutex;
	pthread_cond_t cond;
};

class Parker {
public:
	Parker();
	~Parker();
	void park(bool isAbsolute, jlong time);
	void unpark();

protected:
	std::atomic_int counter;
	pthread_mutex_t mutex;
	pthread_cond_t relCond; // for relative time
	pthread_cond_t absCond; // for absolute time
	pthread_cond_t* curCond;
};

class PlatformMutex : public ::java::lang::CoreObject {
public:
	PlatformMutex();
	~PlatformMutex();
	void lock() {
		pthread_mutex_lock(&mutex);
	}
	void unlock() {
		pthread_mutex_unlock(&mutex);
	}
	bool tryLock() {
		int status = pthread_mutex_trylock(&mutex);
		return status == 0;
	}
protected:
	pthread_mutex_t mutex;

};

class PlatformMonitor : public PlatformMutex {
public:
	PlatformMonitor();
	~PlatformMonitor();
	bool wait(jlong millis);
	void notify() {
		pthread_cond_signal(&cond);
	}
	void notifyAll() {
		pthread_cond_broadcast(&cond);
	}
private:
	pthread_cond_t cond;
};