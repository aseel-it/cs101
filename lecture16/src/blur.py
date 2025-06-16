from PIL import Image, ImageFilter
before = Image.open("bridge.png")
after = before.filter(ImageFilter.BoxBlur(50))
after.save("out.png")