cpp:
	docker build -t backend \
	docker run -p 8080:8080 backend

cpp-rm:
	docker stop backend

clean:
	cpp-rm 