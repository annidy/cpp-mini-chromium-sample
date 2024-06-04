1. clone https://github.com/chromium/mini_chromium.git
2. Rewrite mini_chromium/BUILD.gn

```
group("base") {
  public_deps = [
    "base",
  ]
}
```