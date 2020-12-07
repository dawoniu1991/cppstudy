#ifndef PS_INTERNAL_ENV_H_
#define PS_INTERNAL_ENV_H_
#include <cstdlib>
#include <unordered_map>
#include <memory>
#include <string>
#include <iostream>

    class Environment {
    public:
        /**
         * \brief return the singleton instance
         */
        static inline Environment* Get() {
            return _GetSharedRef(nullptr).get();
        }
        static inline std::shared_ptr<Environment> _GetSharedRef() {
            return _GetSharedRef(nullptr);
        }
        static inline Environment* Init(const std::unordered_map<std::string, std::string>& envs) {
            Environment* env = _GetSharedRef(&envs).get();
            env->kvs = envs;
            return env;
        }

    private:
        explicit Environment(const std::unordered_map<std::string, std::string>* envs) {
            std::cout << "envs=== "<<envs << std::endl;
            std::cout << "envs nullptr=== "<<(envs!=nullptr) << std::endl;
            //std::cout << "envs type=== "<<typeid(envs).name() << std::endl;
            std::cout << "kvs=============== " << kvs.size() << std::endl;
            if (envs) kvs = *envs;
            std::cout << "kvs=============== " << kvs.size() << std::endl;
            //std::cout << "kvs nullptr=== " << (kvs != nullptr) << std::endl;
            //std::cout << "kvs type=== " << typeid(kvs).name() << std::endl;
        }

        static std::shared_ptr<Environment> _GetSharedRef(
            const std::unordered_map<std::string, std::string>* envs) {
            static std::shared_ptr<Environment> inst_ptr(new Environment(envs));
            return inst_ptr;
        }
        std::unordered_map<std::string, std::string> kvs;
    };
#endif  // PS_INTERNAL_ENV_H_
