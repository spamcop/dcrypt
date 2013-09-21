{
  "targets" : [
    {
        "target_name": "dcrypt",
        "include_dirs": ["src"],
        "sources": [
          "src/cipher.cc",
           "src/decipher.cc",
           "src/dx509.cc","src/hash.cc","src/init.cc","src/random.cc","src/verify.cc",
          "src/common.cc", "src/drsa.cc","src/encode.cc","src/hmac.cc","src/keypair.cc","src/sign.cc"

        ]


    }

  ]
}